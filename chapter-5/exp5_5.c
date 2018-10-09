#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
void my_strcpy(char *s,char *t)
{
	printf("%c",*s);
	while(*s++ = *t++){
		printf("%c",*(s-1));
	}
}
void main()
{
	char s[] = "hello-s";
	char *m ;
	char *t = "hello";
	m = (char *)malloc(10);
	my_strcpy(m,t);
	printf("%s\n",s);
	printf("%c\n",*t);
	while(*t++)
		printf("%c",*(t-1));
	printf("\n");
	while(*m++){
		printf("%c",*(m-1));
	}
}
