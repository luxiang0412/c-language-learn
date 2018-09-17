#include <stdio.h>
/* printd: print n in decimal */
void main(int n){
	printf("%d\n",1/10);
	printf("%d\n",11/10);
	void printd(int n );
	printd(213123);
}
void printd(int n)
{
	if(n<0){
		putchar('-');
		n = -n;
	}
	if(n/10)
		printd(n/10);
	putchar(n%10+'0');
}
