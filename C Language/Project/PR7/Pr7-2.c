#include <stdio.h>

int arraySum(int a[],int n)
{
	int sum=0,i;
	for(i=0; i<n; i++)
	{
		sum += a[i];
	}
	return sum;
}

void main()
{
	int n;
	printf("Enter length : ");
	scanf("%d",&n);
	
	int a[n],i,add;
	for(i=0; i<n; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	add= arraySum(a,n);
	
	printf("Sum : %d",add);
}
