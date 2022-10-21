#include<stdio.h>

main()
{
	int i,j,r,c,sum=0;
	
	printf("Enter number of rows : ");
	scanf("%d",&r);
	printf("Enter number of columns : ");
	scanf("%d",&c);
	
	int a[r][c];
	
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
	for(r = 0; r<i; r++)
  	{
   		sum = sum + a[r][i-r-1];
  	}
 
 	printf("\n The Sum of Opposite Diagonal Elements of a Matrix =  %d", sum );
	
}
