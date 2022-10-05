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

	printf("Give value of z : ");
	scanf("%d",&z);


	printf("Answer :%i\n ",(x*x*x)-(y*y*y)-(z*z*z)-(3*(x*x*y))+(3*(x*y*y))-(3*(y*y*z))-(3*(y*z*z))+(3*(x*z*z))+(3*(x*x*z))+(6*x*y*z));

	getch();


}