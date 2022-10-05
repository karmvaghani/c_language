#include <stdio.h>
#include <conio.h>

main()
{
	int x,y,z;
	float d;

	clrscr();

	printf("Give value of x : ");
	scanf("%d",&x);

	printf("Give value of y : ");
	scanf("%d",&y);

	printf("Answer :%i\n ",(x*x*x) + (y*y*y) + (3*x*y*(x+y)));

	getch();


}