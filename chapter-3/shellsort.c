#include <stdio.h>
void shellsort(int sort[],int n);
void main()
{
	int sort[]={1,5,2,84,2,7,8,35,8,4};
	int n = 10;
	shellsort(sort,n);
}
void shellsort(int v[],int n){
	int gap , i , j , temp;
	for(gap = n/2;gap > 0;gap /= 2)
		for(i = gap;i < n; i++)
			for(j=i-gap;j>=0 && v[j]>v[j+gap]; j-=gap){
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap]=temp;
			}

	for(int k = 0;k<n;++k)
		printf("%d,",v[k]);
	printf("\n");
}
