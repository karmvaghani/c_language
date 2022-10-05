#include<stdio.h>
#include<conio.h>

main()
{
	int r;
	float pi = 3.14;
	clrscr();
	printf("Radius : ");
	scanf("%d",&r);


	printf("Perimeter of Circle is : %.2f",(2*pi*r));

	getch();

}