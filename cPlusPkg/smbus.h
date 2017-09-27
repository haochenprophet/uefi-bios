#ifndef D_SMBUS_H
#define D_SMBUS_H

#include "io.h"
#include "memory.h"
namespace n_smbus
{
	class Csmbus:public Cio ,public Cmemory
	{
	public:
		Csmbus();
		~Csmbus();
	};
	
}

using namespace n_smbus;

#endif //D_SMBUS_H
