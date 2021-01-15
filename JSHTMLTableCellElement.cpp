/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSHTMLTableCellElement.h"

#include "HTMLNames.h"
#include "HTMLTableCellElement.h"
#include "KURL.h"
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLTableCellElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLTableCellElementTableValues[17] =
{
    { "cellIndex", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementCellIndex), (intptr_t)0 THUNK_GENERATOR(0) },
    { "abbr", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementAbbr), (intptr_t)setJSHTMLTableCellElementAbbr THUNK_GENERATOR(0) },
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementAlign), (intptr_t)setJSHTMLTableCellElementAlign THUNK_GENERATOR(0) },
    { "axis", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementAxis), (intptr_t)setJSHTMLTableCellElementAxis THUNK_GENERATOR(0) },
    { "bgColor", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementBgColor), (intptr_t)setJSHTMLTableCellElementBgColor THUNK_GENERATOR(0) },
    { "ch", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementCh), (intptr_t)setJSHTMLTableCellElementCh THUNK_GENERATOR(0) },
    { "chOff", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementChOff), (intptr_t)setJSHTMLTableCellElementChOff THUNK_GENERATOR(0) },
    { "colSpan", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementColSpan), (intptr_t)setJSHTMLTableCellElementColSpan THUNK_GENERATOR(0) },
    { "headers", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementHeaders), (intptr_t)setJSHTMLTableCellElementHeaders THUNK_GENERATOR(0) },
    { "height", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementHeight), (intptr_t)setJSHTMLTableCellElementHeight THUNK_GENERATOR(0) },
    { "noWrap", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementNoWrap), (intptr_t)setJSHTMLTableCellElementNoWrap THUNK_GENERATOR(0) },
    { "rowSpan", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementRowSpan), (intptr_t)setJSHTMLTableCellElementRowSpan THUNK_GENERATOR(0) },
    { "scope", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementScope), (intptr_t)setJSHTMLTableCellElementScope THUNK_GENERATOR(0) },
    { "vAlign", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementVAlign), (intptr_t)setJSHTMLTableCellElementVAlign THUNK_GENERATOR(0) },
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementWidth), (intptr_t)setJSHTMLTableCellElementWidth THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableCellElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLTableCellElementTable = { 36, 31, JSHTMLTableCellElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLTableCellElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLTableCellElementConstructorTable = { 1, 0, JSHTMLTableCellElementConstructorTableValues, 0 };
class JSHTMLTableCellElementConstructor : public DOMConstructorObject {
public:
    JSHTMLTableCellElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLTableCellElementConstructor::s_info = { "HTMLTableCellElementConstructor", 0, &JSHTMLTableCellElementConstructorTable, 0 };

JSHTMLTableCellElementConstructor::JSHTMLTableCellElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSHTMLTableCellElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSHTMLTableCellElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLTableCellElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableCellElementConstructor, DOMObject>(exec, &JSHTMLTableCellElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLTableCellElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLTableCellElementConstructor, DOMObject>(exec, &JSHTMLTableCellElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLTableCellElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLTableCellElementPrototypeTable = { 1, 0, JSHTMLTableCellElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLTableCellElementPrototype::s_info = { "HTMLTableCellElementPrototype", 0, &JSHTMLTableCellElementPrototypeTable, 0 };

JSObject* JSHTMLTableCellElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLTableCellElement>(exec, globalObject);
}

const ClassInfo JSHTMLTableCellElement::s_info = { "HTMLTableCellElement", &JSHTMLElement::s_info, &JSHTMLTableCellElementTable, 0 };

JSHTMLTableCellElement::JSHTMLTableCellElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLTableCellElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLTableCellElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLTableCellElementPrototype(globalObject, JSHTMLTableCellElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLTableCellElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableCellElement, Base>(exec, &JSHTMLTableCellElementTable, this, propertyName, slot);
}

bool JSHTMLTableCellElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLTableCellElement, Base>(exec, &JSHTMLTableCellElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLTableCellElementCellIndex(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->cellIndex());
    return result;
}

JSValue jsHTMLTableCellElementAbbr(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::abbrAttr));
    return result;
}

JSValue jsHTMLTableCellElementAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}

JSValue jsHTMLTableCellElementAxis(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::axisAttr));
    return result;
}

JSValue jsHTMLTableCellElementBgColor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::bgcolorAttr));
    return result;
}

JSValue jsHTMLTableCellElementCh(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::charAttr));
    return result;
}

JSValue jsHTMLTableCellElementChOff(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::charoffAttr));
    return result;
}

JSValue jsHTMLTableCellElementColSpan(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->colSpan());
    return result;
}

JSValue jsHTMLTableCellElementHeaders(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::headersAttr));
    return result;
}

JSValue jsHTMLTableCellElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::heightAttr));
    return result;
}

JSValue jsHTMLTableCellElementNoWrap(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->hasAttribute(WebCore::HTMLNames::nowrapAttr));
    return result;
}

JSValue jsHTMLTableCellElementRowSpan(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->rowSpan());
    return result;
}

JSValue jsHTMLTableCellElementScope(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::scopeAttr));
    return result;
}

JSValue jsHTMLTableCellElementVAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::valignAttr));
    return result;
}

JSValue jsHTMLTableCellElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::widthAttr));
    return result;
}

JSValue jsHTMLTableCellElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableCellElement* domObject = static_cast<JSHTMLTableCellElement*>(asObject(slotBase));
    return JSHTMLTableCellElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLTableCellElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLTableCellElement, Base>(exec, propertyName, value, &JSHTMLTableCellElementTable, this, slot);
}

void setJSHTMLTableCellElementAbbr(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::abbrAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableCellElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::alignAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableCellElementAxis(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::axisAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableCellElementBgColor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::bgcolorAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableCellElementCh(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::charAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableCellElementChOff(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::charoffAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableCellElementColSpan(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setColSpan(value.toInt32(exec));
}

void setJSHTMLTableCellElementHeaders(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::headersAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableCellElementHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::heightAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableCellElementNoWrap(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setBooleanAttribute(WebCore::HTMLNames::nowrapAttr, value.toBoolean(exec));
}

void setJSHTMLTableCellElementRowSpan(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setRowSpan(value.toInt32(exec));
}

void setJSHTMLTableCellElementScope(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::scopeAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableCellElementVAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::valignAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableCellElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableCellElement* castedThis = static_cast<JSHTMLTableCellElement*>(thisObject);
    HTMLTableCellElement* imp = static_cast<HTMLTableCellElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::widthAttr, valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLTableCellElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLTableCellElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
