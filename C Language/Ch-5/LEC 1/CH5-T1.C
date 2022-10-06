#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;

	clrscr();

	printf("Value of a :");
	scanf("%d",&a);

	printf("Value of b :");
	scanf("%d",&b);

	if(a < b)
	{
		printf("a is smaller than b");
	}

	else
	{
		printf("b is smaller than a");
	}

	getch();

}