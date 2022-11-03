#include<stdio.h>
#include<conio.h>

main()
{

	int n,r,sum=0,multi=1;
	clrscr();

	printf("Enter Any number : ");
	scanf("%d",&n);

	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		multi=multi*r;
		n=n/10;
	}
	if(sum==multi)
	{
		printf("Magic Number");
	}

	getch();
}
