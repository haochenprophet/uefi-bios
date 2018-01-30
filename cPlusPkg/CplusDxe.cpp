#include "CplusDxe.h"

#ifndef GPIO_BASE_ADDRESS
#define GPIO_BASE_ADDRESS 0x500
#endif

extern "C" EFI_STATUS EFIAPI CplusDxeDriverEntryPoint (
	IN EFI_HANDLE        ImageHandle,
	IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
/*
	//test some pch chipset gpio setting
	Cio io; //set GPIO24 GPIO26 GPIO27 GPIO44 GPIO45 GPIO46 
	io.or(GPIO_BASE_ADDRESS+0x00,(UINT32)(1<<24|1<<26|1<<27));//IoOr32
	io.or(GPIO_BASE_ADDRESS+0x04,(UINT32)(1<<24|1<<26|1<<27));
	io.or(GPIO_BASE_ADDRESS+0x30,(UINT32)(1<<(44-32)|1<<(45-32)|1<<(46-32)));
	io.or(GPIO_BASE_ADDRESS+0x34,(UINT32)(1<<(44-32)|1<<(45-32)|1<<(46-32)));
*/
	return EFI_SUCCESS;
}
