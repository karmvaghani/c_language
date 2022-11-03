#include<stdio.h>
#include<conio.h>

main()
{
	char a;
	clrscr();

	printf("Enter A : ");
	scanf("%c",&a);

	if(a>='A' && a<='Z')
	{
		printf("A is ALPHABET");
	}
	else if(a>='a' && a<='z')
	{
		printf("A is alphabet");
	}
	else if(a>='1' && a<='9')
	{
		printf("A is digit");
	}
	else
	{
		printf("A is special character");
	}

	getch();
}
