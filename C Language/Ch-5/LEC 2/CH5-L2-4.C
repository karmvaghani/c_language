#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e;
	clrscr();

	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :");
	scanf("%d",&d);
	printf("Enter e :");
	scanf("%d",&e);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("a is big.");
				}
				else
				{
					printf("e id big.");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is big.");
				}
				else
				{
					printf("e is big.");
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("c is big.");
				}
				else
				{
					printf("e is big.");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is big.");
				}
				else
				{
					printf("e is big.");
				}
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("d is big.");
				}
				else
				{
					printf("e is big.");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is big.");
				}
				else
				{
					printf("e is big.");
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("c is big");
				}
				else
				{
					printf("e is big.");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is big.");
				}
				else
				{
					printf("e is big.");
				}
			}
		}
	}

	getch();

}