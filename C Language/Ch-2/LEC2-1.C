
#include<stdio.h>
#include<conio.h>

main()
{
	int r;
	float pi = 3.14;

	clrscr();
	printf("r for radius : ");
	scanf("%d",&r);

	printf("Area of Circle is : %.2f", pi*r*r);

	getch();

}