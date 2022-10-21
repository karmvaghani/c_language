#include<stdio.h>

main()
{
	int r,c,i,j,a[i][j],b[i][j],sum=0;
	
	printf("Enter the number or rows : ");
	scanf("%d",&r);
	printf("Enter the number or column : ");
	scanf("%d",&c);
	
		for(i=0; i<r; i++)
		{
		for(j=0; j<c; j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
		
		}
		for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("b[%d][%d] = %d\n",i,j,a[i][j]);
		}
	}
	printf("sum of 2D array is : %d",sum);
}
