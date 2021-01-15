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
#include "JSHTMLTableColElement.h"

#include "HTMLNames.h"
#include "HTMLTableColElement.h"
#include "KURL.h"
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLTableColElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLTableColElementTableValues[8] =
{
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableColElementAlign), (intptr_t)setJSHTMLTableColElementAlign THUNK_GENERATOR(0) },
    { "ch", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableColElementCh), (intptr_t)setJSHTMLTableColElementCh THUNK_GENERATOR(0) },
    { "chOff", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableColElementChOff), (intptr_t)setJSHTMLTableColElementChOff THUNK_GENERATOR(0) },
    { "span", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableColElementSpan), (intptr_t)setJSHTMLTableColElementSpan THUNK_GENERATOR(0) },
    { "vAlign", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableColElementVAlign), (intptr_t)setJSHTMLTableColElementVAlign THUNK_GENERATOR(0) },
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableColElementWidth), (intptr_t)setJSHTMLTableColElementWidth THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableColElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLTableColElementTable = { 17, 15, JSHTMLTableColElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLTableColElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLTableColElementConstructorTable = { 1, 0, JSHTMLTableColElementConstructorTableValues, 0 };
class JSHTMLTableColElementConstructor : public DOMConstructorObject {
public:
    JSHTMLTableColElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLTableColElementConstructor::s_info = { "HTMLTableColElementConstructor", 0, &JSHTMLTableColElementConstructorTable, 0 };

JSHTMLTableColElementConstructor::JSHTMLTableColElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSHTMLTableColElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSHTMLTableColElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLTableColElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableColElementConstructor, DOMObject>(exec, &JSHTMLTableColElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLTableColElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLTableColElementConstructor, DOMObject>(exec, &JSHTMLTableColElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLTableColElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLTableColElementPrototypeTable = { 1, 0, JSHTMLTableColElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLTableColElementPrototype::s_info = { "HTMLTableColElementPrototype", 0, &JSHTMLTableColElementPrototypeTable, 0 };

JSObject* JSHTMLTableColElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLTableColElement>(exec, globalObject);
}

const ClassInfo JSHTMLTableColElement::s_info = { "HTMLTableColElement", &JSHTMLElement::s_info, &JSHTMLTableColElementTable, 0 };

JSHTMLTableColElement::JSHTMLTableColElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLTableColElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLTableColElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLTableColElementPrototype(globalObject, JSHTMLTableColElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLTableColElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableColElement, Base>(exec, &JSHTMLTableColElementTable, this, propertyName, slot);
}

bool JSHTMLTableColElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLTableColElement, Base>(exec, &JSHTMLTableColElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLTableColElementAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}

JSValue jsHTMLTableColElementCh(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::charAttr));
    return result;
}

JSValue jsHTMLTableColElementChOff(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::charoffAttr));
    return result;
}

JSValue jsHTMLTableColElementSpan(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->span());
    return result;
}

JSValue jsHTMLTableColElementVAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::valignAttr));
    return result;
}

JSValue jsHTMLTableColElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::widthAttr));
    return result;
}

JSValue jsHTMLTableColElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLTableColElement* domObject = static_cast<JSHTMLTableColElement*>(asObject(slotBase));
    return JSHTMLTableColElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLTableColElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLTableColElement, Base>(exec, propertyName, value, &JSHTMLTableColElementTable, this, slot);
}

void setJSHTMLTableColElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(thisObject);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::alignAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableColElementCh(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(thisObject);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::charAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableColElementChOff(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(thisObject);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::charoffAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableColElementSpan(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(thisObject);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    imp->setSpan(value.toInt32(exec));
}

void setJSHTMLTableColElementVAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(thisObject);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::valignAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableColElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLTableColElement* castedThis = static_cast<JSHTMLTableColElement*>(thisObject);
    HTMLTableColElement* imp = static_cast<HTMLTableColElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::widthAttr, valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLTableColElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLTableColElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
