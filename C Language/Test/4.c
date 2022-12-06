#include<stdio.h>



void main()
{
	int n,i,sum = 0;
	int *p1,*p2,*s;
	
	printf("Enter the lenght of Array 1 : ");
	scanf("%d",&n);
	
	int a[n];
	p1 = a;
	s = sum;
	
	for (i=0; i<n; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",p1[i]);
	}
	printf("Enter the lenght of Array 2 : ");
	scanf("%d",&n);
	
	int b[n];
	p2 = b;
	
	for (i=0; i<n; i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",p2[i]);
	}
	
	for(i=0; i<n; i++)
	{
		s += p1[i];
		s = sum+p2[i];
		
	}printf("\n");
	
	printf ("Sum : %d",*s);
}
