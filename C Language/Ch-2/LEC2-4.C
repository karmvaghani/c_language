#include<stdio.h>
#include<conio.h>

main()
{
	float a,b,c,s,area ;

	clrscr();
	printf("Enter the values of side a : ");
	scanf("%f",&a);
	printf("Enter the values of side b : ");
	scanf("%f",&b);
	printf("Enter the values of side c : ");
	scanf("%f",&c);

	s = (a + b + c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));

	printf("Area of Triangle : %.2f",area);

	getch();

}