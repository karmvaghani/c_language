#include<stdio.h>

void div(int a)
{
	if(a%3 == 0 && a%5 == 0)
	{
		printf("Number is divisible by 3 and 5 :) \n");
	}
	else
	{
		printf("Not divisible by 3 and 5 :( \n");
	}
}

void main()
{
	int a;
	printf("Enter a : ");
	scanf("%d",&a);
	
	div(a);
}
