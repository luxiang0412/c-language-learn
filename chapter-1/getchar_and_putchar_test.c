#include <stdio.h>
void main()
{
	int c;
	c = getchar();
	while(c != EOF){
		printf("%c",(char)c);
		putchar(c);
		c = getchar();
	}
}
