#ifndef D_SMBIOS_H
#define D_SMBIOS_H

#include "smbios_type.h"

namespace n_smbios
{
	class Csmbios:public Csmbios_type
	{
	public:
		Csmbios();
		~Csmbios();
	};
	
}
using namespace n_smbios;
#endif //D_SMBUS_H
