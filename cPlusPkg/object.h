#ifndef D_OBJECT_H
#define D_OBJECT_H

#include <Uefi.h>
namespace n_object
{
	class Cobject
	{
	public:
		char * name;
	public:
		Cobject();
		~Cobject();
		void * getClass();
	};
	
}

using namespace n_object;
#endif //D_OBJECT_H
