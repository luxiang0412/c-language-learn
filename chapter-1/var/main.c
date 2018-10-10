#include <stdio.h>
void c_2(void)
{
	printf("main_c_2\n");
}
/** c_() 在c.c中被定义不能再被定义
void c_(void)
{
	printf("main_c");
}
**/
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
	c_2();
	//c_2();//error
	printf("%d\n",a);
	//printf("%d\n",c);//error static 不可引用
}
