#include<stdio.h>
#include<conio.h>

main()
{
	int f,l,n;
	clrscr();

	printf("Enter any Number : ");
	scanf("%d",&n);

	l=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	f=n;
	printf("Sum = %d",f+l);

	getch();
}
