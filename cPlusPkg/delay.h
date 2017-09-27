#ifndef D_DELAY_H
#define D_DELAY_H
#include "object.h"

namespace n_delay
{

	class Cdelay:public Cobject
	{
	public:
		Cdelay();
		~Cdelay();
	};
}

using namespace n_delay;
#endif //D_DELAY_H