#include <stdio.h>
#define swap(t,x,y) {t _z;\
					_z = x;\
					x = y;\
					y = _z;}
void main()
{
	int x = 1;
	int y = 2;
	swap(int ,x,y);
	printf("%d\t,%d\n",x,y);
}
