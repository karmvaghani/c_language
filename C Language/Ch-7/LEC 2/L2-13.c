#include<stdio.h>

main()
{
	int i,j,k;
	
	for(i=1; i<=5; i++)
	{
		for(k=1; k<=5-i; k++)
		{
			printf(" ");
		}
		for(j=i; j>=1; j--)
		{
			printf("%c",(char)(j+64));
		}
		printf("\n");
	}
}
