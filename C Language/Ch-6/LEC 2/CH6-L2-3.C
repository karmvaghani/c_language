#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;

	clrscr();
	printf("Enter the value of n : ");
	scanf("%d",&n);

	i=1;

	do
	{
		printf("%d ",i);
		i++;
	}while(i <= n);

	getch();

}
