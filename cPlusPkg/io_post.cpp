#include "io_post.h"

#if IO_POST_ENABLE

Cio_post::Cio_post()
{

}

Cio_post::~Cio_post()
{

}

void Cio_post::io_post(UINT16 port,UINT8  data,UINT32 loop_count,UINT8 halt)
{
	do{
		for(;loop_count>0;loop_count--) this->write(port,data);
	}while(halt);
}

void Cio_post::io_post(UINT16 port,UINT16 data,UINT32 loop_count,UINT8 halt)
{
	do{
		for(;loop_count>0;loop_count--) this->write(port,data);
	}while(halt);	
}

void Cio_post::io_post(UINT16 port,UINT32 data,UINT32 loop_count,UINT8 halt)
{
	do{
		for(;loop_count>0;loop_count--) this->write(port,data);
	}while(halt);	
}

void Cio_post::post80(UINT8  data,UINT32 loop_count,UINT8 halt)
{
	Cio_post::io_post((UINT16)IO_PORT_80,data,loop_count,halt);
}

void Cio_post::post80(UINT16 data,UINT32 loop_count,UINT8 halt)
{
	Cio_post::io_post((UINT16)IO_PORT_80,data,loop_count,halt);	
}

void Cio_post::post80(UINT32 data,UINT32 loop_count,UINT8 halt)
{
	Cio_post::io_post((UINT16)IO_PORT_80,data,loop_count,halt);	
}

#endif //IO_POST_ENABLE
