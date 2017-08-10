#ifndef D_OPERATOR_H
#define D_OPERATOR_H

void * __cdecl operator new(size_t size);
void * __cdecl operator new[](size_t size);
void __cdecl operator delete(void * p);
void __cdecl operator delete[](void * p);

#endif //D_OPERATOR_H
