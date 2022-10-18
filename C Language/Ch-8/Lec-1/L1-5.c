#include<stdio.h>

main() 
{
	int n1,n2;
	
	printf("Enter size of first array : ");
	scanf("%d",&n1);
	printf("Enter size of second array : ");
	scanf("%d",&n2);
	
	int a[n1],b[n2],c[n1 + n2],i;
	
	for(i=0; i<n1; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n2; i++)
	{
		printf("Enter b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	printf("After merging it will be stored in c.\n");
	for(i=0; i<n1; i++)
	{
		c[i] = a[i];
	}
	for(i=0; i<n2; i++)
	{
		c[i + n1] = b[i];
	}
	for(i=0; i<n1+n2; i++)
	{
		printf("c[%d] = %d\n",i,c[i]);
	}
}

