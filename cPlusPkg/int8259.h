#ifndef D_INT8259_H
#define D_INT8259_H
#include "io.h"

namespace n_int8259
{
	class Cint8259:public Cio
	{
	public:
		Cint8259();
		~Cint8259();
	};
}

using namespace n_int8259;
#endif //D_INT8259_H
