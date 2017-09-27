#ifndef D_SMBIOS_H
#define D_SMBIOS_H

#include "memory.h"
namespace n_smbios
{
	class Csmbios:public Cmemory
	{
	public:
		Csmbios();
		~Csmbios();
	};
	
}
using namespace n_smbios;
#endif //D_SMBUS_H
