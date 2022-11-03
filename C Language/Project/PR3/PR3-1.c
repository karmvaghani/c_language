#include<stdio.h>
#include<conio.h>

main()
{
	char a='A';
	clrscr();

	do
	{
		printf("%c  ",a);
		a++;
	}
	while(a<='Z');

	getch();
}
