#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;

	clrscr();
	printf("Enter n :");
	scanf("%d",&n);

	for (i=1; i<=n; n--)
	{
	if(n%2!=1)
		printf("%d ",n);
	}
	getch();

}