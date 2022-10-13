#include<stdio.h>

main()
{
	int i,j;
	
	for(i=0; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			if((i+j)%2 == 0)
				printf("-");
			else
				printf("|");
		}
		printf("\n");
	}
}
