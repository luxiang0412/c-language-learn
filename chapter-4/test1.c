#include <stdio.h>
extern int xx;
int add(int i){
	//static int xx = 5;
	printf("%d\n",xx);
	return i+i;
}
