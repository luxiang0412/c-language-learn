#include <stdio.h>
int mystrend(char *s,char *t)
{
	char *bs = s;//记录s初始位置
	char *bt = t;//记录t的初始位置
	for(;*s;s++)//将指针指向字符串末尾
		;
	for(;*t;t++)//将指针指向字符串末尾
		;
	for(;*s == *t;s--,t--)//循环t
		if(t==bt||s==bs)//如果t或者s循环结束，则跳出循环
			break;
	if(*s == *t&&t== bt && s != '\0')//如果*s和*t相等且t和bt的值相等
		return 1;
	else
		return 0;
}
void main()
{
	char *s = "helloabc";
	char *t = "abc";
	char *t2 = "aa";
	printf("%d\n",mystrend(s,t));
	printf("%d\n",mystrend(s,t2));
	printf("%d\n",mystrend(t,s));
}
