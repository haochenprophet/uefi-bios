#ifndef D_IO_POST_H
#define D_IO_POST_H

#ifndef IO_POST_ENABLE
#define IO_POST_ENABLE 1
#endif

#if IO_POST_ENABLE

#include "io.h"

#define IO_PORT_80 0x80

namespace n_io_post
{
	class Cio_post:public Cio
	{
	public:
		Cio_post();
		~Cio_post();
		static void post(UINT16 port,UINT8  data,UINT32 loop_count=1,UINT8 halt=0);
		static void post(UINT16 port,UINT16 data,UINT32 loop_count=1,UINT8 halt=0);
		static void post(UINT16 port,UINT32 data,UINT32 loop_count=1,UINT8 halt=0);
		static void post80(UINT8  data,UINT32 loop_count=1,UINT8 halt=0);
		static void post80(UINT16 data,UINT32 loop_count=1,UINT8 halt=0);
		static void post80(UINT32 data,UINT32 loop_count=1,UINT8 halt=0);		
	};
}

using namespace n_io_post;

#endif //IO_POST_ENABLE
#endif //D_IO_POST_H