#include <stdio.h>
#define BLANK ' '
void main()
{
	int c , lastc;
	lastc = BLANK;
	while((c=getchar())!=EOF){
		if(c!=' '){
			printf("%c",c);
		}
		if(c==' ')
			if(lastc!=' ')
				printf("%c",c);
		lastc = c;
	}
	printf("\n");
}
