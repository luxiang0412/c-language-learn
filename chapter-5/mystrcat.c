#include <stdio.h>
#include <malloc.h>
void mystrcat(char *s,char *t)
{
	while(*s)
		s++;
	while(*s++ = *t++)
		;
}
void main()
{
	char *s = (char*)malloc(20);
	*s = 'h';
	char *t = "world";
	mystrcat(s,t); 
	while(*s){
		printf("%c",*s);
		++s;
	}
	printf("\n");
}
