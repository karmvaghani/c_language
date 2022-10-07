#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);

	(a>b)
		? (a>c)
			?printf("a is big.")
			:printf("c is big.")
		:(b>c)
			?printf("b is big.")
			:printf("c is big.");

	getch();

}