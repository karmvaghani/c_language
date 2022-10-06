#include<stdio.h>
#include<conio.h>

main()
{
	int a;

	clrscr();

	printf("Value of a :");
	scanf("%d",&a);

	if(a > 0)
	{
		printf("a positive");
	}
	else if(a == 0)
	{
		printf("a is neutral");
	}

	else
	{
		printf("a is nagitive");
	}

	getch();

}