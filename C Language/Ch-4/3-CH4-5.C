#include <stdio.h>
#include <conio.h>

main()
{
	int x,y,z;
	float m;

	clrscr();

	printf("Give value of x : ");
	scanf("%d",&x);

	printf("Give value of y : ");
	scanf("%d",&y);

	printf("Answer :%i\n ",(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x)));

	getch();


}

