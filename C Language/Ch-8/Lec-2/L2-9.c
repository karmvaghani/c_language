#include<Stdio.h>

main()
{
	int r,c,principal,secondary,cross;
	
	principal = 0, secondary = 0;
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
				if(i==j)
				{
					principal += a[i][j];
				}
				else if((i+j) == (c-1))
				{
					secondary += a[i][j];
				}
			}
		}
		printf("Principal diagonal : %d\n",principal);
		printf("Secondary Diagonal : %d\n",secondary);
		
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				cross = principal + secondary;
			}
		}
		printf("Cross Diagonal = %d\n",cross);
}
