#include <stdio.h>
void main()
{
	int x = 3;
	int *ip ;
	ip =&x;
	printf("%d\n",*ip);
	++*ip;
	printf("%d\n",*ip);
	*ip++;
	printf("%d\n",*ip);
}
