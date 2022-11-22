#include<stdio.h>

void main()
{
	FILE *e,*o,*p;
	int n,i,c=0;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	e = fopen("even.txt","w");
	o = fopen("odd.txt","w");
	p = fopen("prime.txt","w");
	
	for(i=1; i<=n; i++)
	{
		if(n % i==0)
		{
			c++;
		}
	}
	if (n % 2 == 0)
	{
		fprintf(e,"%d is even number !! ",n);
	}
	else if (c==2)
	{
		fprintf(p,"%d is prime number !! ",n);
	}
	else
	{
		fprintf(o,"%d iss odd number !! ",n);
	}
	
}
