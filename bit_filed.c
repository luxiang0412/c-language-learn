#include <stdio.h>
int main()
{
	struct f{
		int a:11;
		int b:6;
		int c:2;
		int d:5;
		int e:3;
		int f:4;
		int g:1;
	};
	struct f a;
	printf("%zu\n",sizeof(a));
	return 0;
}
