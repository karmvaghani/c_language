#include<stdio.h>
#include<conio.h>

void main()
{
	int n,fact = 1;

	clrscr();

	printf("Enter n : ");
	scanf("%d",&n);

	do
	{
		printf("%d ",n);
		fact = fact * n;
		n--;

	}while(n>=1);

	printf("\nfactorial : %d",fact);

	getch();

}
