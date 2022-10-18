#include<stdio.h>

main()
{
	int i,n,sum=0;
	
	printf("Enter the lenght of array for a : ");
	scanf("%d",&n);
	
	int a[n];
	
	for (i=0; i<n; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
		sum += a[i];
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d\n",a[i]);
	}

	int b[n];
	
	printf("Enter the lenght of array for b : ");
	scanf("%d",&n);
		for (i=0; i<n; i++)
	{
		printf("Enter b[%d] : ",i);
		scanf("%d",&b[i]);
		sum += b[i];
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d\n",b[i]);
	}
	
	int c[i];
	
	for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
	
	printf("Sum of these two array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
	
}
