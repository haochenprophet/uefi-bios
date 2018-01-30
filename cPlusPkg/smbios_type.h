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
	

	typedef struct StructSmbiosEntry32
	{
		UINT8  AnchorString[4];//_SM_
		UINT8  EntryPointStructureChecksum;
		UINT8  EntryPointLength;
		UINT8  SMBIOSMajorVersion;
		UINT8  SMBIOSMinorVersion;
		UINT16 MaximumStructureSize;
		UINT8  EntryPointRevision;
		UINT8  FormattedArea[5];
		UINT8  IntermediateAnchorString[5];//_DMI_
		UINT8  IntermediateChecksum;
		UINT16 StructureTableLength;
		UINT32 StructureTableAddress;
		UINT16 NumberOfSMBIOSStructures;
		UINT8  SMBIOSBCDRevision;
	}SsmbiosEntry32;

	typedef struct StructSmbiosEntry64
	{
		UINT8   AnchorString[5];//_SM3_
		UINT8   EntryPointStructureChecksum;
		UINT8   EntryPointLength;
		UINT8   SMBIOSMajorVersion;
		UINT8   SMBIOSMinorVersion;
		UINT8   SMBIOSDocrev;
		UINT8   EntryPointRevision;
		UINT8   Reserved;
		UINT32  StructureTableMaximumSize;//_DMI_
		UINT64  StructureTableAddress;
	}SsmbiosEntry64;

	typedef struct StructSmbiosHeader
	{
		UINT8  Type;//_SM_
		UINT8  Length;
		UINT16 Handle;
	}SsmbiosHeader;

	class  CsmbiosEntry
	{
	public:
		SsmbiosEntry32 * p_entry32;
		SsmbiosEntry64 * p_entry64;
	public:
		 CsmbiosEntry();
		~ CsmbiosEntry();
	};
}
using namespace n_smbios_type;
#endif //D_SMBUS_H
