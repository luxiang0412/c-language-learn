#include <stdio.h>
void main()
{
	int num;
	num = 0;
	int c ;
	while((c=getchar())!=EOF){
		if(c=='\n'||c=='\t'||c==' '){
			++num;
		}
	}
	printf("%d\n",num);
}
