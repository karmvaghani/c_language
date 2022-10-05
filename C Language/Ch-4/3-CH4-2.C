#include <stdio.h>
#include <conio.h>

main()
{
	int a,b,c;
	float d;

	clrscr();

	printf("Give value of a : ");
	scanf("%d",&a);

	printf("Give value of b : ");
	scanf("%d",&b);

	printf("Answer :%i\n ",(a*a) - (2*a*b) + (b*b));

	getch();


}