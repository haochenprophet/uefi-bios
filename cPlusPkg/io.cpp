#include "io.h"

Cio::Cio()
{
	
}

Cio::~Cio()
{
	
}

UINT8 Cio::read(UINT16 port,UINT8 * out)
{
	* out=IoRead8(port);
	return * out;
}

UINT16 Cio::read(UINT16 port,UINT16 * out)
{
	* out=IoRead16(port);
	return * out;
}

UINT32 Cio::read(UINT16 port,UINT32 * out)
{
	* out=IoRead32(port);
	return * out;
}

UINT8  Cio::write(UINT16 port,UINT8 data)
{
	return IoWrite8(port,data);
}

UINT16 Cio::write(UINT16 port,UINT16 data)
{
	return IoWrite16(port,data);
}

UINT32 Cio::write(UINT16 port,UINT32 data)
{
	return IoWrite32 (port,data);
}

UINT8  Cio::or(UINT16 port,UINT8 orData)
{
	return IoOr8(port,orData);
}

UINT16 Cio::or(UINT16 port,UINT16 orData)
{
	return IoOr16(port,orData);
}

UINT32 Cio::or(UINT16 port,UINT32 orData)
{
	return IoOr32(port,orData);
}

UINT8  Cio::and(UINT16 port,UINT8 andData)
{
	return IoAnd8 (port,andData);
}

UINT16 Cio::and(UINT16 port,UINT16 andData)
{
	return IoAnd16 (port,andData);
}

UINT32 Cio::and(UINT16 port,UINT32 andData)
{
	return IoAnd32 (port,andData);
}

UINT8  Cio::isaRead(UINT16 indexPort,UINT8 index,UINT16 dataPort,UINT8 *data)
{
	this->write(indexPort,index);
	return this->read(dataPort,data);
}

UINT8  Cio::isaRead(UINT16 indexPort,UINT16 index,UINT16 dataPort,UINT8 *data)
{
	this->write(indexPort,index);
	return this->read(dataPort,data);
}

UINT8  Cio::isaWrite(UINT16 indexPort,UINT8 index,UINT16 dataPort,UINT8 data)
{
	this->write(indexPort,index);
	return this->write(dataPort,data);
}

UINT8  Cio::isaWrite(UINT16 indexPort,UINT16 index,UINT16 dataPort,UINT8 data)
{
	this->write(indexPort,index);
	return this->write(dataPort,data);
}

unsigned Cio::byte_read(unsigned port)
{
    return this->read(port,&this->v.b_data);
}

void Cio::byte_write(unsigned char byte,unsigned port)
{
    this->write(port,(UINT8)byte);
}

unsigned Cio::word_read(unsigned port)
{
    return this->read(port,&this->v.w_data);
}

void Cio::word_write(unsigned short word,unsigned port)
{
    this->write(port,(UINT16)word);
}

unsigned Cio::dword_read(unsigned port)
{
    return this->read(port,&this->v.d_data);
}

void Cio::dword_write(unsigned dword,unsigned port)
{
    this->write(port,(UINT32)dword);
}

unsigned  Cio::isa_read(unsigned short index_port,unsigned char index,unsigned short data_port)
{
    this->byte_write(index,index_port);
    return this->byte_read(data_port);
}

void Cio::isa_write(unsigned short index_port,unsigned char index,unsigned short data_port,unsigned char data)
{
    this->byte_write(index,index_port);
    this->byte_write(data,data_port);
}

void Cio::isa_or(unsigned short index_port,unsigned char index,unsigned short data_port,unsigned char bits)
{
    this->byte_write(index,index_port);
    this->byte_write((unsigned char)this->byte_read(data_port)|bits,(unsigned)data_port);
}

void Cio::isa_and(unsigned short index_port,unsigned char index,unsigned short data_port,unsigned char bits)
{
    this->byte_write(index,index_port);
    this->byte_write((unsigned char)this->byte_read(data_port)&bits,(unsigned)data_port);
}
