#ifndef D_OPERATOR_H
#define D_OPERATOR_H
namespace n_operator
{
	void * __cdecl operator new(size_t size);
	void * __cdecl operator new[](size_t size);
	void __cdecl operator delete(void * p);
	void __cdecl operator delete[](void * p);
}
using namespace n_operator;

#endif //D_OPERATOR_H
