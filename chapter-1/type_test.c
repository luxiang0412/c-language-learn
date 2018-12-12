#include <stdio.h>
void main()
{
	char s[] = "ddddd";
	printf("%zu\n",sizeof(int));//4
	printf("%zu\n",sizeof(char));//1
	printf("%zu\n",sizeof(double));//8
	printf("%zu\n",sizeof(float));//4
	printf("%zu\n",sizeof(short int));//2
	printf("%zu\n",sizeof(long int));//8
	printf("%zu\n",sizeof(s));//6
	printf("%d\n",(int)s[6]);//0
}
