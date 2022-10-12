#include<stdio.h>
#include<conio.h>

main()
{
	int n,m=1;

	clrscr();
	printf("Enter n :");
	scanf("%d",&n);

	do
	{
		if(m%2 !=1)
			printf("%d ",m);
		m++;

	}while(n>=m);

	getch();

}