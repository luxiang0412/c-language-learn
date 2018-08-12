#include <stdio.h>
#define MAXLINE 1000
#define LONGLINE 80

int my_getline2(char line[],int maxline);
void main()
{
	int len;
	char line[MAXLINE];
	while((len=my_getline2(line,MAXLINE))>0){
		if(len>LONGLINE){
			printf("%s",line);
		}
		printf("%d/n",len);
	}
	//printf("%d/n",len);
}
int my_getline2(char line[],int maxline)
{
	int c , i;
	for(i=0 ; i<maxline-1 &&(c=getchar())!=EOF&&c!='\n';++i){
		/*printf("%d\t",i);*/
		line[i] = c;
	}
	if(c=='\n'){
		line[i]=c;
		++i;
	}
	line[i] = '\0';
	return i;
}

