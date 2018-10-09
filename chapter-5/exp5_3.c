#include <stdio.h>
void main()
{	
	int x = 2,y=4;
	int m = 2,n = 4;
	void my_swap1(int x,int y);
	void my_swap2(int *ip,int *py);
	my_swap1(x,y);
	printf("x=%d,y=%d\n",x,y);
	my_swap2(&m,&n);
	printf("m=%d,n=%d\n",m,n);
}
void my_swap1(int x, int y )
{
	int temp ;
	temp = x;
	x = y;
	y = temp;
}
void my_swap2(int *ip,int *py ){
	int temp ;
	temp = *ip;
	*ip = *py;
	*py = temp;
}
