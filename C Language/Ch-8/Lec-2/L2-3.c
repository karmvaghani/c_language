#include<stdio.h>

main()
{
	int r,c;
	float average,sum=0;
	
	printf("Enter number of rows : ");
	scanf("%d",&r);
	printf("Enter number of columns : ");
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
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] = %d\n",i,j,a[i][j]);
		}
	}
	printf
}
