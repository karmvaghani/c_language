#include <stdio.h>
#include <conio.h>
#define P printf

main()
{
	int a,b,c ;

	clrscr();

	P("Enter the value of a : ");
	scanf("%d",&a);

	P("Enter the value of b : ");
	scanf("%d",&b);

	c = a ;
	a = b ;
	b = c ;


	printf("A : %d\n",a);
	printf("B : %d\n",b);

	getch();

}