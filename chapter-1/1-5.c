#include <stdio.h>
void main()
{
	float fahr,celsius;
	int lower , upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = upper;
	printf("fahr celsius\n");
	while(fahr >= lower){
		celsius = (fahr-32.0)*(5.0/9.0);
		printf("%3.0f %6.1f\n",fahr,celsius);
		fahr = fahr - step;
	}
}
