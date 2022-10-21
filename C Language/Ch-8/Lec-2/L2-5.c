#include<stdio.h>

main()
{
	int r,c,sum=0;
	
	printf("Enter the number or rows : ");
	scanf("%d",&r);
	printf("Enter the number or column : ");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("Enter a[%d][%d] : ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("============ MATRIX ===========\n\n");
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				sum = sum+a[j][i];
			}
			printf("Sum of all the elements in column a[%d] is %d\n",i,sum);
		}
		
}

