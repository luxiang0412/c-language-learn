#include <stdio.h>
void main()
{
	int c;
	printf("EOF:%d\n",EOF);
	//while((c = getchar())!=EOF)
	//	printf("%d\n",c);
	printf("%d\n",getchar()!=EOF);

}
