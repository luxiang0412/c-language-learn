#include <stdio.h>
#define OUT 0
#define IN 1
void main()
{
	int c, status;
	status = OUT;
	while((c=getchar())!=EOF){
		if(c==' '||c=='\n'||c=='\t'){
			if(status==IN){
				printf("\n");
			}
			status = OUT;
		}else if(status==OUT){
			printf("%c",c);
			status = IN;
		}else{
			printf("%c",c);
		}
	}
}
