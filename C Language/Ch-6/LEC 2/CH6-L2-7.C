#include<stdio.h>
#include<conio.h>

void main()
{
	int n = 2000, m = 3000;

	clrscr();

	do
	{
		if(n%4==0)
			printf("%d ",n);
		n++;

	} while(n<=m);


	getch();

}
