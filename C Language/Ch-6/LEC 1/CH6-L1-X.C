#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i = 1;

	clrscr();

	printf("Enter n : ");
	scanf("%d",&n);

	while(i <= 10)
	{
		printf("%d * %d = %d \n",n,i,n*i);
		i++;

	}

	getch();

}
