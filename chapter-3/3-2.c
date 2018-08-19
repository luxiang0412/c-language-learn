#include <stdio.h>
void escape(char old[],char new[]);
void main()
{
	char old[]={'a','\t','a','\0'};
	char new[100];
	escape(old,new);
}
void escape(char old[],char new[]){
	int i = 0;
	int j = 0;
	char n;
	while((n=old[i++])!='\0'){
		if(n=='\n'){
			new[j++]='\\';
			new[j++]='n';
		}else if(n=='\t'){
			new[j++]='\\';
			new[j++]='t';
		}else
			new[j++]=n;
		printf("%c\n",n);
	}
	printf("%s\n",old);
	printf("%s\n",new);
}
