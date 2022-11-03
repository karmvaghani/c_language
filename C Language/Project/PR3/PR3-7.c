#include<stdio.h>
#include<conio.h>

main()
{
	int n1=0,n2=1,n,sum=0;
	clrscr();

	printf("Enter Number : ");
	scanf("%d",&n);

	while(n1<n)
	{
		printf("%d ",n1);
		sum=n1+n2;
		n1=n2;
		n2=sum;
	}

	getch();
}
