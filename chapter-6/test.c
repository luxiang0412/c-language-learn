#include <stdio.h>
#include <stdlib.h>
void main()
{
	char * a,b;
	a = malloc(sizeof(a));
	b = 'n';
	*a = 'm';
	printf("%c\n",b);
	printf("%c\n",*a);
}
