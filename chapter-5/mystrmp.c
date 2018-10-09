#include <stdio.h>
int mystrcmp(char *s, char *t){
	for(;*s == *t;s++,t++)
		if(*s=='\0')
			return 0;
	return *s - *t;
}
void main()
{
	char *s = "hello";
	char *t = "helli";
	printf("%d\n",mystrcmp(s,t));//6
	char *s2 = "hello";
	char *t2 = "hello";
	printf("%d\n",mystrcmp(s2,t2));//0
	char *s3 = "helli";
	char *t3 = "hello";
	printf("%d\n",mystrcmp(s3,t3));//-6
}
