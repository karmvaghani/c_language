#include<stdio.h>

main()
{
	int i,j,r,c,sum1=0,sum2=0;
	
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
   		sum1 = sum1 + a[r][i-r-1];
  	}
  	for (i=0; i<r; i++)
  	{
  		if(i+j == r-1)
  		{
  			sum2 = sum2 +a[i][j];	
		}
	}
 
 	printf("\n Diagonal Elements =  %d", sum1 );
 	printf("\n AntiDiagonal Elements =  %d", sum2 );
	
}
