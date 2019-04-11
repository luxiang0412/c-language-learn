#include <stdio.h>
#define OUT 0
#define IN 1
int main()
{
	int c ,wn ,ln,cn ,state;
    wn = ln = cn = 0;
	state = OUT;
	while((c = getchar())!=EOF){
		if(c == '\n')
			++ln;
		if(c=='\n' || c==' ' || c=='\t')
			state = OUT;
		//状态为out变为in的时候，词数加1,判断上一次state是不是在out
		else if(state==OUT){
			state = IN;
			++wn;
		}
		++cn;
	}
	printf("%d %d %d\n",ln,wn,cn);
	return 0;
}
