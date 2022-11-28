#include<stdio.h>

int multi(int s,int e)
{
	int i,j;
	for (i=1; i <= 10; i++)
	{
		for(j=s; j<=e; j++)
			printf("%d * %d = %d\t",j,i,i*j);
			printf("\n");

	}
}

void main()
{
	int s,e;

	printf("Enter starting : ");
	scanf("%d",&s);
	printf("Enter ending : ");
	scanf("%d",&e);
	
	multi(s,e);
	
}
