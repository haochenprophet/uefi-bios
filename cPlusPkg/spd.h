#ifndef D_SPD_H
#define D_SPD_H

#include "smbus.h"

namespace n_spd
{
	class Cspd:public Csmbus
	{
	public:
		Cspd();
		~Cspd();
	};
	
}
using namespace n_spd;

#endif //D_SPD_H
