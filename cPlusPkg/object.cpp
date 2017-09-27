#include "object.h"

Cobject::Cobject()
{
	this->name=nullptr;
}

Cobject::~Cobject()
{
	
}

void * Cobject::getClass()
{
	return this;
}
