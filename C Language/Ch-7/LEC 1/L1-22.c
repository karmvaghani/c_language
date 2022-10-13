#include<stdio.h>

main()
{
	int i,j,k;
	
	for (i=1; i<=5; i++)
	{
		k=i;
		
		for(j=1; j<=i; j++, k++)
		{
			printf("%c ",(char)(k+64));
		
		}
		printf("\n");
	}
}
