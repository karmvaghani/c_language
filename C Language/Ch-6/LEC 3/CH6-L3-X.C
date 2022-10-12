#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,j;

	clrscr();

	printf("Enter n : ");
	scanf("%d",&n);

	for (i=1; i <= 10; i++)
	{
		for(j=1; j<=n; j++)
		printf("%d * %d = %d\t",i,j,i*j);
		printf("\n");

	}


	getch();

}
