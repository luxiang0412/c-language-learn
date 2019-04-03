#include <stdio.h>

int main()
{
	char c = 'a';
	unsigned char uc = 'a';
	short s = 10;
	unsigned short us = 10;
	int i = 10;
	unsigned int ui = 10;
	long l = 10;
	unsigned long ul = 10;
	float f = 10;
	double d = 10;
	long int li = 10;
	long long ll = 10;
	long double ld = 10;
	printf("type char size of :%zu\n", sizeof(c));
	printf("type unsigned char size of :%zu\n", sizeof(uc));
	printf("type short size of :%zu\n", sizeof(s));
	printf("type unsigned short size of :%zu\n", sizeof(us));
	printf("type int size of :%zu\n", sizeof(i));
	printf("type unsigned int size of :%zu\n", sizeof(ui));
	printf("type long size of :%zu\n", sizeof(l));
	printf("type unsigned long size of :%zu\n", sizeof(ul));
	printf("type float size of :%zu\n", sizeof(f));
	printf("type double size of :%zu\n", sizeof(d));
	printf("type long int size of :%zu\n", sizeof(li));
	printf("type long long size of :%zu\n", sizeof(ll));
	printf("type long double size of :%zu\n", sizeof(ld));
	float x = 3.3 , y = 4.4 , z = 3.1;
	printf("%d\n",(int)(x+y));
	printf("%d\n",(int)(x+z));
	return 0;
}
