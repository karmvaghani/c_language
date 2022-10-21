#include<stdio.h>

main()
{
	int r,c;
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	printf("Enter the number of columns : ");
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
			if(i==0 || j==0 || i==r-1 || j==c-1)
			{
				printf("%d ", a[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
