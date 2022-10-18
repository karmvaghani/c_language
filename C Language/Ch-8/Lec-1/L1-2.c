#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter the lenght of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for (i=0; i<n; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d\n",a[i]);
	}
	printf("Length of array is : %d",n);
}
