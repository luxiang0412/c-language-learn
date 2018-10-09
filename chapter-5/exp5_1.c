#include <stdio.h>
void main()
{
	int x = 1, y = 2 ,z[10];
	int *ip;
	ip = &x;
	printf("%d\n",*ip);//1
	printf("%p\n",ip);
	y = *ip;
	printf("%d\n",y);//1
	*ip = 0;
	printf("x=%d,y=%d\n",x,y);//x=0,y=1
	printf("%p\n",ip);
	y = *ip;
	printf("x=%d,y=%d\n",x,y);//x=0,y=0
	ip = &z[0];
	printf("x=%d,y=%d\n",x,y);//x=0,y=0
	printf("%p\n",ip);
	y = *ip;
}
