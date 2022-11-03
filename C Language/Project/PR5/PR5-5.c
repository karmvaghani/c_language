#include<stdio.h>

main()
{
	int n,i;
	
	printf("Enter arrayn size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter Value : ");
		scanf("%d",&a[i]);
	}
	printf("\nRight rotate : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("\nLeft rotate : ");
	for(i=n-1; i>=0; i--)
	{
		printf("%d ",a[i]);
	}
	
}
