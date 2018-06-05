/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRIOBuffer_IVRIOBuffer_001.h"

typedef struct __winIVRIOBuffer_IVRIOBuffer_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRIOBuffer_IVRIOBuffer_001;

DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_Open, 32)
EIOBufferError __thiscall winIVRIOBuffer_IVRIOBuffer_001_Open(winIVRIOBuffer_IVRIOBuffer_001 *_this, const char * pchPath, EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, IOBufferHandle_t * pulBuffer)
{
    TRACE("%p\n", _this);
    return cppIVRIOBuffer_IVRIOBuffer_001_Open(_this->linux_side, pchPath, mode, unElementSize, unElements, pulBuffer);
}

DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_Close, 12)
EIOBufferError __thiscall winIVRIOBuffer_IVRIOBuffer_001_Close(winIVRIOBuffer_IVRIOBuffer_001 *_this, IOBufferHandle_t ulBuffer)
{
    TRACE("%p\n", _this);
    return cppIVRIOBuffer_IVRIOBuffer_001_Close(_this->linux_side, ulBuffer);
}

DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_Read, 32)
EIOBufferError __thiscall winIVRIOBuffer_IVRIOBuffer_001_Read(winIVRIOBuffer_IVRIOBuffer_001 *_this, IOBufferHandle_t ulBuffer, void * pDst, uint32_t unBytes, uint32_t * punRead)
{
    TRACE("%p\n", _this);
    return cppIVRIOBuffer_IVRIOBuffer_001_Read(_this->linux_side, ulBuffer, pDst, unBytes, punRead);
}

DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_Write, 24)
EIOBufferError __thiscall winIVRIOBuffer_IVRIOBuffer_001_Write(winIVRIOBuffer_IVRIOBuffer_001 *_this, IOBufferHandle_t ulBuffer, void * pSrc, uint32_t unBytes)
{
    TRACE("%p\n", _this);
    return cppIVRIOBuffer_IVRIOBuffer_001_Write(_this->linux_side, ulBuffer, pSrc, unBytes);
}

DEFINE_THISCALL_WRAPPER(winIVRIOBuffer_IVRIOBuffer_001_PropertyContainer, 12)
PropertyContainerHandle_t __thiscall winIVRIOBuffer_IVRIOBuffer_001_PropertyContainer(winIVRIOBuffer_IVRIOBuffer_001 *_this, IOBufferHandle_t ulBuffer)
{
    TRACE("%p\n", _this);
    return cppIVRIOBuffer_IVRIOBuffer_001_PropertyContainer(_this->linux_side, ulBuffer);
}

extern vtable_ptr winIVRIOBuffer_IVRIOBuffer_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRIOBuffer_IVRIOBuffer_001,
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_Open)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_Close)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_Read)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_Write)
        VTABLE_ADD_FUNC(winIVRIOBuffer_IVRIOBuffer_001_PropertyContainer)
    );
#ifndef __GNUC__
}
#endif

winIVRIOBuffer_IVRIOBuffer_001 *create_winIVRIOBuffer_IVRIOBuffer_001(void *linux_side)
{
    winIVRIOBuffer_IVRIOBuffer_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRIOBuffer_IVRIOBuffer_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRIOBuffer_IVRIOBuffer_001_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRIOBuffer_IVRIOBuffer_001(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRIOBuffer_IVRIOBuffer_001 *create_winIVRIOBuffer_IVRIOBuffer_001_FnTable(void *linux_side)
{
    winIVRIOBuffer_IVRIOBuffer_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRIOBuffer_IVRIOBuffer_001));
    struct thunk *thunks = alloc_thunks(5);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 5 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRIOBuffer_IVRIOBuffer_001_Open);
    init_thunk(&thunks[1], r, winIVRIOBuffer_IVRIOBuffer_001_Close);
    init_thunk(&thunks[2], r, winIVRIOBuffer_IVRIOBuffer_001_Read);
    init_thunk(&thunks[3], r, winIVRIOBuffer_IVRIOBuffer_001_Write);
    init_thunk(&thunks[4], r, winIVRIOBuffer_IVRIOBuffer_001_PropertyContainer);
    for (i = 0; i < 5; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRIOBuffer_IVRIOBuffer_001_FnTable(void *object)
{
    winIVRIOBuffer_IVRIOBuffer_001 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

