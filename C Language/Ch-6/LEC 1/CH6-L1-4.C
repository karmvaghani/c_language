#include<stdio.h>
#include<conio.h>

main()
{
	int n,m=1;

	clrscr();
	printf("Enter n :");
	scanf("%d",&n);



	while(n>=m)
	{
		printf("%d ",n);
		n--;
	}

	getch();

}