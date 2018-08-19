#include <stdio.h>
int mybinsearch(int x,int v[],int n);
void main()
{
	int v[]={1,2,3,4,5,7};
	int x = 6;
	int y =5;
	int n = 6;
	printf("%d\n",mybinsearch(x,v,n));
	printf("%d\n",mybinsearch(y,v,n));
}
int mybinsearch(int x ,int v[],int n){
	int low , high,mid;
	low=0;
	high = n-1;
	while(low <=high){
		mid = (low+high)/2;
		if(x<v[mid])
			high = mid-1;
		else if(x>v[mid])
			low = mid+1;
		else
			return mid;
	}
	return -1;
}
