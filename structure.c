#include <stdio.h>
int main()
{
	/*
		1. 编译器在给结构体开辟内存空间时，首先找到结构体中最宽的数据类型，
	   然后寻找内存地址是该基本数据类型的整数倍的位置。
	   2.结构体中每个变量的的的偏移位置都是改变量的整数倍。
	   3.结构体的总大小是这个结构体中变量最大大小的整数倍。
	 */
	struct one {
		int a;
		char b;
		char c;
	} one_s;
	struct two{
		char b;
		char c;
		int a;
	} two_s;
	struct three{
		char b;
		int a;
		char c;
	} three_s;
	printf("%zu\n",sizeof(one_s));//8	4+1+1+2
	printf("%zu\n",sizeof(two_s));//8	1+1+4+2
	printf("%zu\n",sizeof(three_s));//12	1+3+4+1+3
	return 0;
}
