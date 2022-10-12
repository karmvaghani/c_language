#include<stdio.h>
#include<conio.h>

main()
{
	int n,m=1,sum=0;

	clrscr();

	printf("Enter value of n :");
	scanf("%d",&n);

	do
	{
		printf("%d ",m);
		sum = sum + m;
		m++;

	}while(m <= n);

	printf("\nSum : %d",sum);

	getch();

}
