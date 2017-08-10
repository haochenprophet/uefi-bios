#include "operator.h"

extern "C" void * AllocateZeroPool (UINTN  AllocationSize);
extern "C" void FreePool (void  *Buffer);

void * __cdecl operator new(size_t size)
{
	return AllocateZeroPool(size);
}

void * __cdecl operator new[](size_t size)
{
	return AllocateZeroPool(size);
}

void __cdecl operator delete(void * p)
{
	FreePool(p);
}

void __cdecl operator delete[](void * p)
{
	FreePool(p);
}
