#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,check=0;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	for(i=2; i<n; i++)
	{
		if(n%i==0)
		{
			check=1;
		}
	}
	if(check==0)
	{
		printf("\n\nNumber is prime");
	}
	else
	{
		printf("\n\nNumber is not prime");
	}

	getch();
}
