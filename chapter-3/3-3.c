#include <stdio.h>
void expand(char s1[],char s2[]);
void main()
{
	char s1[]={'a','-','z'};
	char s2[100];
	expand(s1,s2);
}
void expand(char s1[],char s2[]){
	int i , j;
	i = j = 0;
	char c;
	while((c = s1[i++])!='\0'){
		if(s1[i] == '-'&& s1[i+1] >= c){
			i++;
			while(c<s1[i])
				s2[j++] = c++;
		}else{
			printf("%c\n",c);
			s2[j++] = c;
		}
	}
	s2[j] = '\0';
	printf("%s\n",s2);
}
