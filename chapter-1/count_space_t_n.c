#include <stdio.h>
/*将输入的字符输出来，并且将连续的空格用一个空格替代*/
int main()
{
	int c,last;
	last = 'a';
	while((c = getchar())!=EOF){
		if(c != ' ')
			putchar(c);
		else if(last != ' ')
			putchar(c);
		last = c;
	}
	return 0;
}
