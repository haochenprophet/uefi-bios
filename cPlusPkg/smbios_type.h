#ifndef D_SMBIOS_TYPE_H
#define D_SMBIOS_TYPE_H

#include "memory.h"
namespace n_smbios_type
{
	class Csmbios_type:public Cmemory,public Cpci
	{
	public:
		Csmbios_typ();
		~Csmbios_type();
	};
	

	class  CsmbiosEntry
	{
	public:
		UINT32 AnchorString;//_SM_
		UINT8  EntryPointStructureChecksum;
		UINT8  EntryPointLength;
	public:
		 CsmbiosEntry();
		~ CsmbiosEntry();
	};
}
using namespace n_smbios_type;
#endif //D_SMBUS_H
