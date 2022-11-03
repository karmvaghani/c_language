#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	printf("Enter A : ");
	scanf("%d",&a);

	(a%2==0) ? printf("A is even")
		 : printf("A is odd");

	getch();
}
