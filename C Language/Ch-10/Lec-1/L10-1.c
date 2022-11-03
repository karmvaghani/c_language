#include<stdio.h>

void cube(int a)
{
	printf("Cube of given number is : %d\n",a*a*a);
}

void main()
{
	int a;
	printf("Enter a : ");
	scanf("%d",&a);
	
	cube(a);
}
