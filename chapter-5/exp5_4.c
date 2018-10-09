#include <stdio.h>
void main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *ip;
	ip = a;
	printf("%p\n",a);
	printf("%p\n",ip);
	printf("%p\n",(a+1));
	printf("%d\n",*(a+1));
}
