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
#include "JSHistory.h"

#include "History.h"
#include "JSHistoryCustom.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHistory);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHistoryTableValues[2] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHistoryLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHistoryTable = { 2, 1, JSHistoryTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHistoryPrototypeTableValues[6] =
{
    { "back", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHistoryPrototypeFunctionBack), (intptr_t)0 THUNK_GENERATOR(0) },
    { "forward", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHistoryPrototypeFunctionForward), (intptr_t)0 THUNK_GENERATOR(0) },
    { "go", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHistoryPrototypeFunctionGo), (intptr_t)1 THUNK_GENERATOR(0) },
    { "pushState", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHistoryPrototypeFunctionPushState), (intptr_t)3 THUNK_GENERATOR(0) },
    { "replaceState", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHistoryPrototypeFunctionReplaceState), (intptr_t)3 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHistoryPrototypeTable = { 17, 15, JSHistoryPrototypeTableValues, 0 };
const ClassInfo JSHistoryPrototype::s_info = { "HistoryPrototype", 0, &JSHistoryPrototypeTable, 0 };

JSObject* JSHistoryPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHistory>(exec, globalObject);
}

bool JSHistoryPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHistoryPrototypeTable, this, propertyName, slot);
}

bool JSHistoryPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHistoryPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHistory::s_info = { "History", 0, &JSHistoryTable, 0 };

JSHistory::JSHistory(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<History> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSHistory::~JSHistory()
{
    forgetDOMObject(this, impl());
}

JSObject* JSHistory::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHistoryPrototype(globalObject, JSHistoryPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSHistory::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    if (getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSHistory, Base>(exec, &JSHistoryTable, this, propertyName, slot);
}

bool JSHistory::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    if (getOwnPropertyDescriptorDelegate(exec, propertyName, descriptor))
        return true;
    return getStaticValueDescriptor<JSHistory, Base>(exec, &JSHistoryTable, this, propertyName, descriptor);
}

JSValue jsHistoryLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHistory* castedThis = static_cast<JSHistory*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    History* imp = static_cast<History*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->length());
    return result;
}

void JSHistory::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    if (putDelegate(exec, propertyName, value, slot))
        return;
    Base::put(exec, propertyName, value, slot);
}

EncodedJSValue JSC_HOST_CALL jsHistoryPrototypeFunctionBack(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHistory::s_info))
        return throwVMTypeError(exec);
    JSHistory* castedThis = static_cast<JSHistory*>(asObject(thisValue));
    History* imp = static_cast<History*>(castedThis->impl());

    imp->back();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHistoryPrototypeFunctionForward(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHistory::s_info))
        return throwVMTypeError(exec);
    JSHistory* castedThis = static_cast<JSHistory*>(asObject(thisValue));
    History* imp = static_cast<History*>(castedThis->impl());

    imp->forward();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHistoryPrototypeFunctionGo(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHistory::s_info))
        return throwVMTypeError(exec);
    JSHistory* castedThis = static_cast<JSHistory*>(asObject(thisValue));
    History* imp = static_cast<History*>(castedThis->impl());
    int distance = exec->argument(0).toInt32(exec);

    imp->go(distance);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHistoryPrototypeFunctionPushState(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHistory::s_info))
        return throwVMTypeError(exec);
    JSHistory* castedThis = static_cast<JSHistory*>(asObject(thisValue));
    return JSValue::encode(castedThis->pushState(exec));
}

EncodedJSValue JSC_HOST_CALL jsHistoryPrototypeFunctionReplaceState(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHistory::s_info))
        return throwVMTypeError(exec);
    JSHistory* castedThis = static_cast<JSHistory*>(asObject(thisValue));
    return JSValue::encode(castedThis->replaceState(exec));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, History* object)
{
    return getDOMObjectWrapper<JSHistory>(exec, globalObject, object);
}
History* toHistory(JSC::JSValue value)
{
    return value.inherits(&JSHistory::s_info) ? static_cast<JSHistory*>(asObject(value))->impl() : 0;
}

}
