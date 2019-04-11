#include <stdio.h>
#include <error.h>
#include <string.h>
extern int errno;
int main()
{
	FILE *file = NULL;
	int errnum;
	file = fopen("/home/luxiang/c-language-learn/test.out","a+");
	if(file==NULL){
		fprintf(stderr,"%s\n",strerror(errnum));
	}else{
		fputc('c',file);
		fclose(file);
	}
	return 0;
}
