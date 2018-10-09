#include <stdio.h>
#include <malloc.h>
int mystrlen(char *s)
{
	char *p = s;
	while (*p != '\0')
		p++;
	return p - s;
}
void mystrncpy(char *s,char *t,int n)
{
	while(*t && n-->0)
		*s++ = *t++;
	while(n-->0)
		*s++ = '\0';
}
void mystrncat(char *s,char *t ,int n)
{
	void mystrncpy(char *s,char *t,int n);
	int mystrlen(char *);
	mystrncpy(s+mystrlen(s),t,n);
}
int mystrcmp(char *s,char *t, int n)
{
	for (;*s == *t;s++,t++)
		if(*s == '\0' || --n<=0)
			return 0;
	return *s  - *t;
}
void main()
{
	char *s = (char *)malloc(20);
	*s = 'h';
	char *t = "word";
	int n = 2;
	mystrncat(s,t,n);
	while(*s){
		printf("%c",*s);
		s++;
	}//hwo
	printf("\n");
}
