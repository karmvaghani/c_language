#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);

	(a>b)
		?printf("a is big.")
		:printf("b is big.");

	getch();

}