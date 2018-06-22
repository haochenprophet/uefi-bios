#include "object.h"

int my_id=0;

Cobject::Cobject()
{
	this->name=(char *)0;
	this->id=++my_id;
}

Cobject::~Cobject()
{
	
}

void * Cobject::getClass()
{
	return this;
}
