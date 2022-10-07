#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();

	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :");
	scanf("%d",&d);

	(a>b)
		? (a>c)
			?(a>d)
				?printf("a is big.")
				:printf("d is big.")
			:(c>d)
				?printf("c is big.")
				:printf("d is big.")
		:(b>c)
			?(b>d)
				?printf("b is big.")
				:printf("d is big.")
			:(c>d)
				?printf("c is big.")
				:printf("d is big.");


	getch();

}