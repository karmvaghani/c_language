#include<stdio.h>
#include<conio.h>

main()
{
	int n,count=0;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	while(n!=0)
	{
		n=n/10;
		count++;
	}

	printf("\n%d",count);

	getch();
}
