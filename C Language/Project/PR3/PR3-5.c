#include<stdio.h>
#include<conio.h>

main()
{
	int r,s=0,a,temp;
	clrscr();

	printf("`Enter Any Number : ");
	scanf("%d",&a);

	temp=a;

	while(a!=0)
	{
		r=a%10;
		s=s*10+r;
		a=a/10;
	}
	printf("\nReverse = %d",s);

	if(temp==s)
	{
		printf("\n\nNumber is Palindrome");
		}
	else
	{
		printf("\n\nNumber is not Palindrome");
	}

	getch();
}
