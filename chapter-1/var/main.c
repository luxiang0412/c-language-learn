#include <stdio.h>
void main()
{
	//extern int c;
	extern int a;
	void a_();
	void b_();
	void c_();
	//void c_2();//error 不可引用
	a_();
	b_();
	c_();
	//c_2();//error
	printf("%d\n",a);
	//printf("%d\n",c);//error static 不可引用
}
