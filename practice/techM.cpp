#include<stdio.h>


int main()
{
	int arr[100],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
		arr[i] = ((~arr[i]));
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
