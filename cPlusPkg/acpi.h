#ifndef D_ACPI_H
#define D_ACPI_H

#include "memory.h"
namespace n_acpi
{

	class Cacpi:public Cmemory
	{
	public:
		Cacpi();
		~Cacpi();
	};

}

using namespace n_acpi;
#endif
