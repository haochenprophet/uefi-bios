#define POST80_COUNT 0x200000
#define ENABLE_POST80 1
#define HALT_POST80 0
void post80(unsigned long d)
{
#if ENABLE_POST80
	int n;
	do{
		if(d>0xFFFF)for(n=0;n<POST80_COUNT;n++) IoWrite16(0x80,(unsigned short)(d>>16));
		for(n=0;n<POST80_COUNT;n++) IoWrite16(0x80,(unsigned short)d);
	}while(HALT_POST80);
#endif
}
