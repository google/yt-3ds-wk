/*
 * Copyright (C) 2011 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SkPDFFont_DEFINED
#define SkPDFFont_DEFINED

#include "SkPDFTypes.h"
#include "SkTDArray.h"
#include "SkThread.h"

class SkPaint;
class SkAdvancedTypefaceMetrics;

/** \class SkPDFFont
    A PDF Object class representing a font.  The font may have resources
    attached to it in order to embed the font.  SkPDFFonts are canonicalized
    so that resource deduplication will only include one copy of a font.
    This class uses the same pattern as SkPDFGraphicState, a static weak
    reference to each instantiated class.
*/
class SkPDFFont : public SkPDFDict {
public:
    virtual ~SkPDFFont();

    virtual void getResources(SkTDArray<SkPDFObject*>* resourceList);

    /* Returns the font ID represented by this class.
     */
    uint32_t fontID();

    /** Return true if this font has an encoding for the passed glyph id.
     */
    bool hasGlyph(uint16_t glyphID);

    /** Returns true if this font encoding supports glyph IDs above 255.
     */
    bool multiByteGlyphs();

    /** Convert the input glyph IDs into the font encoding.  If the font has
     *  more glyphs than can be encoded (like a type 1 font with more than
     *  255 glyphs) this method only converts up to the first out of range
     *  glyph ID.
     *  @param glyphIDs       The input text as glyph IDs.
     *  @param numGlyphs      The number of input glyphs.
     *  @param encodedValues  The method writes its result to this parameter.
     *                        multiByteGlyphs() reveals the output format.
     *  @param encodedLength  The size of encodedValues (in bytes), which is
     *                        overwritten with how much of encodedValues is
     *                        used.
     *  @return               Returns the number of glyphs consumed.
     */
    size_t glyphsToPDFFontEncoding(const uint16_t* glyphIDs, size_t numGlyphs,
                                   void* encodedValues, size_t* encodedLength);

    /** Get the font resource for the passed font ID and glyphID. The
     *  reference count of the object is incremented and it is the caller's
     *  responsibility to unreference it when done.  This is needed to
     *  accommodate the weak reference pattern used when the returned object
     *  is new and has no other references.
     *  @param fontID  The fontId to find.
     *  @param glyphID Specify which section of a large font is of interest.
     */
    static SkPDFFont* getFontResource(uint32_t fontID, uint16_t glyphID);

private:
    uint32_t fFontID;
#ifdef SK_DEBUG
    bool fDescendant;
#endif
    bool fMultiByteGlyphs;

    // The glyph IDs accessible with this font.  For Type1 (non CID) fonts,
    // this will be a subset if the font has more than 255 glyphs.
    uint16_t fFirstGlyphID;
    uint16_t fLastGlyphID;
    // The font info is only kept around after construction for large
    // Type1 (non CID) fonts that need multiple "fonts" to access all glyphs.
    SkRefPtr<SkAdvancedTypefaceMetrics> fFontInfo;
    SkTDArray<SkPDFObject*> fResources;
    SkRefPtr<SkPDFDict> fDescriptor;

    class FontRec {
    public:
        SkPDFFont* fFont;
        uint32_t fFontID;
        uint16_t fGlyphID;

        // A fGlyphID of 0 with no fFont always matches.
        bool operator==(const FontRec& b) const;
        FontRec(SkPDFFont* font, uint32_t fontID, uint16_t fGlyphID);
    };

    // This should be made a hash table if performance is a problem.
    static SkTDArray<FontRec>& canonicalFonts();
    static SkMutex& canonicalFontsMutex();

    /** Construct a new font dictionary and support objects.
     *  @param fontInfo       Information about the to create.
     *  @param fontID         The font ID of the font.
     *  @param glyphID        The glyph ID the caller is interested in. This
     *                        is important only for Type1 fonts, which have
     *                        more than 255 glyphs.
     *  @param descendantFont If this is the descendant (true) or root
     *                        (Type 0 font - false) font dictionary.  Only True
     *                        Type and CID encoded fonts will use a true value.
     *  @param fontDescriptor If the font descriptor has already have generated
     *                        for this font, pass it in here, otherwise pass
     *                        NULL.
     */
    SkPDFFont(class SkAdvancedTypefaceMetrics* fontInfo, uint32_t fontID,
              uint16_t glyphID, bool descendantFont, SkPDFDict* fontDescriptor);

    void populateType0Font();
    void populateCIDFont();
    bool populateType1Font(uint16_t firstGlyphID, uint16_t lastGlyphID);
    void populateType3Font();
    bool addFontDescriptor(int16_t defaultWidth);

    static bool find(uint32_t fontID, uint16_t glyphID, int* index);
};

#endif
