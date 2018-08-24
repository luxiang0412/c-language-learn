#include <stdio.h>
#include "common.h"
extern int n ;
extern int m ;
void main()
{
	char c[] = {'h','e','l','l','o'};
	char d[] = "hello ";
	int i = 0;
	char b ;
	while((b = d[i++]) != '\0'){
		//printf("%c\t",b);
	}
	printf("%d\n",n);
	printf("%d\n",m);
}
