#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,fact=1;
	clrscr();

	printf("Enter Value : ");
	scanf("%d",&n);

	for(i=n; i>=1; i--)
	{
		fact=fact*i;
	}
	printf("\n\nFactorial Num = %d",fact);

	getch();
}
