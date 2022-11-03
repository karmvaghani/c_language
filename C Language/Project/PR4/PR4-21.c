#include<stdio.h>

main()
{
	int i,j,sum=1;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",sum);
			sum += 1;
		}
		printf("\n");
	}
}
