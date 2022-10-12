#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;

	clrscr();

	printf("Enter the value of n : ");
	scanf("%d",&n);

	i=n;

	do
	{
		printf("%d ",i);
		i--;
	}while(i >= 1);

	getch();

}
