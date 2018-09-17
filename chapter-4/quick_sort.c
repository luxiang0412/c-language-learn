#include <stdio.h>
void main()
{
	int v [] = {1,2,8,45,543,2,643,21};
	void my_qsort(int v[], int left,int right);
	my_qsort(v,0,7);
	for(int i = 0;i<8;++i){
		printf("%d\n",v[i]);
	}
}
void my_qsort(int v[],int left,int right)
{
	printf("my_qsort\n");
	int i,last;
	void my_swap(int v[] ,int i , int j );
	if(left >= right)
		return;
	my_swap(v,left,(left+right)/2);
	last = left;
	for(i = left + 1;i<=right ;i++)
		if(v[i]<v[left])
			my_swap(v,++last,i);
	my_swap(v,left,last);
	my_qsort(v,left,last-1);
	my_qsort(v,last+1,right);
}
void my_swap(int v[],int i,int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
