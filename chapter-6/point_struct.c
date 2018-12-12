#include <stdio.h>
struct point{
	int x;
	int y;
};
void main()
{
	struct point z = {0,0};
	struct point *m = &z;
	printf("%d\n",z.x);
	printf("%d\n",m->x);
	m->x = 1;
	printf("%d\n",m->x);
}
