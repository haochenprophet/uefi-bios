#ifndef D_SPI_H
#define D_SPI_H

#include "pci.h"
#include "memory.h"

namespace n_spi
{
	class Cspi:public Cmemory
	{
	public:
		Cspi();
		~Cspi();
	};

}
using namespace n_spi;
#endif //D_SPI_H
