#include <stdio.h>
#include <stdlib.h>
int max(int, int);
int get_random_value(void);
void print_value(int (* func)(void));
extern int rand();
int main()
{
	int (* p)(int,int) = & max;
	printf("%d\n",p(3,4));
	print_value(get_random_value);
	return 0;
}

int max(int x , int y)
{
	return x > y ? x : y;
}
int get_random_value(void)
{
	return (rand)();
}
void print_value(int (* func)(void))
{
	printf("%d\n",func());
}
int rand()
{
	return 0;
}
