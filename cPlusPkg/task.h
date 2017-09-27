#ifndef D_TASK_H
#define D_TASK_H
#include "cpu.h"

namespace n_task
{
	class Ctask:public Ccpu
	{
	public:
		Ctask();
		~Ctask();
	};
}

using namespace n_task;
#endif //D_TASK_H