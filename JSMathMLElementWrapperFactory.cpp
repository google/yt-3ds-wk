/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * This file was generated by the dom/make_names.pl script.
 *
 * Copyright (C) 2005, 2006, 2007, 2008, 2009 Apple Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "JSMathMLElementWrapperFactory.h"

#if ENABLE(MATHML)

#include "JSMathMLMathElement.h"
#include "JSMathMLInlineContainerElement.h"
#include "JSMathMLTextElement.h"

#include "MathMLNames.h"

#include "MathMLMathElement.h"
#include "MathMLInlineContainerElement.h"
#include "MathMLTextElement.h"
#include "MathMLElement.h"
#include <wtf/StdLibExtras.h>

#if ENABLE(VIDEO)
#include "Document.h"
#include "Settings.h"
#endif

using namespace JSC;

namespace WebCore {

using namespace MathMLNames;

typedef JSNode* (*CreateMathMLElementWrapperFunction)(ExecState*, JSDOMGlobalObject*, PassRefPtr<MathMLElement>);

static JSNode* createMathMLMathElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<MathMLElement> element)
{
    return CREATE_DOM_NODE_WRAPPER(exec, globalObject, MathMLMathElement, element.get());
}

static JSNode* createMathMLInlineContainerElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<MathMLElement> element)
{
    return CREATE_DOM_NODE_WRAPPER(exec, globalObject, MathMLInlineContainerElement, element.get());
}

static JSNode* createMathMLTextElementWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<MathMLElement> element)
{
    return CREATE_DOM_NODE_WRAPPER(exec, globalObject, MathMLTextElement, element.get());
}

JSNode* createJSMathMLWrapper(ExecState* exec, JSDOMGlobalObject* globalObject, PassRefPtr<MathMLElement> element)
{
    typedef HashMap<WebCore::AtomicStringImpl*, CreateMathMLElementWrapperFunction> FunctionMap;
    DEFINE_STATIC_LOCAL(FunctionMap, map, ());
    if (map.isEmpty()) {
       map.set(mathTag.localName().impl(), createMathMLMathElementWrapper);
       map.set(mfencedTag.localName().impl(), createMathMLInlineContainerElementWrapper);
       map.set(mfracTag.localName().impl(), createMathMLInlineContainerElementWrapper);
       map.set(miTag.localName().impl(), createMathMLTextElementWrapper);
       map.set(mnTag.localName().impl(), createMathMLTextElementWrapper);
       map.set(moTag.localName().impl(), createMathMLTextElementWrapper);
       map.set(moverTag.localName().impl(), createMathMLInlineContainerElementWrapper);
       map.set(mrootTag.localName().impl(), createMathMLInlineContainerElementWrapper);
       map.set(mrowTag.localName().impl(), createMathMLInlineContainerElementWrapper);
       map.set(msqrtTag.localName().impl(), createMathMLInlineContainerElementWrapper);
       map.set(msubsupTag.localName().impl(), createMathMLInlineContainerElementWrapper);
       map.set(mtextTag.localName().impl(), createMathMLTextElementWrapper);
       map.set(munderTag.localName().impl(), createMathMLInlineContainerElementWrapper);
       map.set(munderoverTag.localName().impl(), createMathMLInlineContainerElementWrapper);
    }
    CreateMathMLElementWrapperFunction createWrapperFunction = map.get(element->localName().impl());
    if (createWrapperFunction)
        return createWrapperFunction(exec, globalObject, element);
    return CREATE_DOM_NODE_WRAPPER(exec, globalObject, MathMLElement, element.get());
}

}

#endif
