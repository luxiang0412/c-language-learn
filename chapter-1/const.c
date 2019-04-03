#include <stdio.h>
int main()
{
	const int a = 0xaa;
	const int b = 0777;
	const int c = 111;
	const int d = 30u;
	const int e = 30l;
	const int f = 30ul;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	char h;
	float i;
	double j;
	int * k;
	int g;
	printf("int %d\n",g);
	printf("char %d\n",h);
	printf("float %f\n",i);
	printf("double %f\n",j);
	printf("int *%p\n",k);
	return 0;
}
