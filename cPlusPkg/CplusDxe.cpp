#include "CplusDxe.h"

extern "C" EFI_STATUS EFIAPI CplusDxeDriverEntryPoint (
	IN EFI_HANDLE        ImageHandle,
	IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
	Cio io;
    io.or((UINT16)(0x500+ 0x0),(UINT32)(1<<24|1<<26|1<<27));//GPIO24 26 27 to GPIO
	io.or((UINT16)(0x500+ 0x4),(UINT32)(1<<24|1<<26|1<<27));//GPIO24 26 27 to GPI
    io.or((UINT16)(0x500+0x30),(UINT32)(1<<(44-32)|1<<(45-32)|1<<(46-32)));//GPIO44 45 46 to GPIO
	io.or((UINT16)(0x500+0x34),(UINT32)(1<<(44-32)|1<<(45-32)|1<<(46-32)));//GPIO44 45 46 to GPI
	return EFI_SUCCESS;
}
