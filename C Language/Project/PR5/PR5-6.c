#include<stdio.h>

main()
{
	int r,c,i,j,sum=0;
	
	printf("Enter Row of A    :");
	scanf("%d",&r);
	printf("Enter Column of A :");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Enter Row of B    :");
	scanf("%d",&r);
	printf("Enter Column of B :");
	scanf("%d",&c);
	
	int b[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter A[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",b[i][j]);
			sum += a[i][j];
			sum = sum+b[i][j];
		}
		printf("\n");
	}
	printf("Addition  = %d",sum);
}
	
	
	
	
	
	
