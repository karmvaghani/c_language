#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);

	if(a<b)
	{
		if(a<c)
		{
			printf("a is small.");
		}
		else
		{
			printf("c is small.");
		}
	}
	else
	{
		if(b<c)
		{
			printf("b is small.");
		}
		else
		{
			printf("c is small.");
		}
	}

	getch();

}