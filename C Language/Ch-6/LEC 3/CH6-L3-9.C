#include<stdio.h>
#include<conio.h>

void main()
{
	int n,fact = 1,i;

	clrscr();

	printf("Enter n : ");
	scanf("%d",&n);

	for (i=1; i <= n; i++)
	{
		fact = fact * i;
	}

	printf("\nfactorial : %d",fact);

	getch();

}
