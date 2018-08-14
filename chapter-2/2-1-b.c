#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
void main()
{
	char s[8];
	printf("%d\n",SCHAR_MIN);
	printf("%d\n",SCHAR_MAX);
	printf("%d\n",SHRT_MIN);
	printf("%d\n",SHRT_MAX);
	printf("%d\n",INT_MIN);
	printf("%d\n",INT_MAX);
	printf("%ld\n",LONG_MIN);
	printf("%ld\n",LONG_MAX);
	printf("%u\n",UCHAR_MAX);
	printf("%u\n",USHRT_MAX);
	printf("%u\n",UINT_MAX);
	printf("%lu\n",ULONG_MAX);
	/***********************/
	printf("%d\n",(char)((unsigned char)~0));
	printf("%x\n",(char)((unsigned char)~0));
	printf("%d\n",(char)((unsigned char)~0>>1));
	printf("%x\n",(char)((unsigned char)~0>>1));
}
