#include <stdio.h>
#include "test1.h"
extern int xx;
//int xx = 1;
void main()
{
	printf("%d\n",xx);
	xx = 2;
	printf("%d\n",add(xx));
	//return 0;
}
