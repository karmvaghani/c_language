#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,sum=0;

	clrscr();

	printf("Enter value of n :");
	scanf("%d",&n);

	for (i=1; i <= n; i++)
	{
		sum += i;

	}

	printf("\nSum : %d",sum);

	getch();

}
