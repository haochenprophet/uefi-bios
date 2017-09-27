#ifndef D_FLASH_H
#define D_FLASH_H

#include "spi.h"
namespace n_flash
{
	class Cflash:public Cspi
	{
	public:
		Cflash();
		~Cflash();
	};
}

using namespace n_flash;

#endif //D_FLASH_H
