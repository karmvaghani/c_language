#include<stdio.h>

main()
{
	int i,n,avg,sum=0;
	
	printf("Enter the lenght of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for (i=0; i<n; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
		sum += a[i];
		avg = (sum+=a[i])/2;
	}
	for(i=0; i<n; i++)
	{
		printf("%d\n",a[i]);
	}
	printf("Sum of array is : %d\n",sum);
	printf("Average of the array is : %d",avg);
	
}
