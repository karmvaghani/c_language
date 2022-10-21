#include<stdio.h>

main()
{
	printf("Enter the elements of array \n");
	int a[5][5],i,j;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("============ MATRIX ===========\n\n");
	
	int sum=0;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i==0 || j==0 || i==5-1 || j==5-1)
			{
				printf("  ");
			}
			else
			{
				printf("%d  ",a[i][j]);
				sum = sum + a[i][j];
			}
		}
		printf("\n");
	}
	printf("Sum of inner elements : %d\n",sum);
}
