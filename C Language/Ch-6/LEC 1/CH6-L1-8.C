#include<stdio.h>
#include<conio.h>

main()
{
	int n,m=1,sum=0;

	clrscr();

	printf("Enter value of n :");
	scanf("%d",&n);

	while(m <= n)
	{
		printf("%d ",m);
		sum = sum + m;
		m++;
	}
	printf("\nSum : %d",sum);

	getch();

}
