#include<stdio.h>


int arrSum(int a[],int n)
{
	int sum=0,i;
	
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	return sum;
}

void main()
{
	int i,n,res;
	
	printf("Enter the lenght of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for (i=0; i<n; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	res = arrSum(a,n);
	
	printf("Sum of array : %d",res);
	
}
	
