#include <stdio.h>
int main()
{
	enum color {red=1,blue,green};
	enum color c;
	for(c = red;c <= green;c++){
		printf("%d\n",c);
	}
	enum color co = red;
	switch(co){
		case red:
			printf("red");
			break;
		case green:
			printf("green");
			break;
		case blue:
			printf("blue");
			break;
	}
	return 0;
}
