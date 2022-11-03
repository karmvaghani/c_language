#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Array Size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter Value : ");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
	}
}
