#include<stdio.h>
#include<conio.h>

main()
{
	int l,b;

	clrscr();
	printf("Give the value of length : ");
	scanf("%d",&l);
	printf("Give the value of breath : ");
	scanf("%d",&b);

	printf("Area of Rectangle is : %i sq.m",l*b);

	getch();

}