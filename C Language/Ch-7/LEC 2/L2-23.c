#include<stdio.h>

main()
{
	int i,j,k;
	
	for(i=0; i<=5; i++)
	{
		for(k=1; k<=5-i; k++)
		{
			printf(" ");
		}
		for(j=i; j>=1; j--)
		{
			if((i+j)%2 == 0)
				printf("|");
			else
				printf("-");
		}
		printf("\n");
	}
}
