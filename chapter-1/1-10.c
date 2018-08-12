#include <stdio.h>
void main()
{
	int c;
	while((c=getchar())!=EOF){
		if(c=='\t'){
			printf("%s","\\t");
		}else if(c=='\\'){
			printf("%s","\\\\");
		}else{
			printf("%c",c);
		}
	}
}
