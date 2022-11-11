#include<stdio.h>

int main()
{
	int i,j,*a,*b,c;
	
	printf("Enter the value of a = ");
	scanf("%d",&i);
	printf("Enter the value of b = ");
	scanf("%d",&j);
	
	printf("Before the swapping a = %d	b = %d\n",i,j);
	
	a = &i;
	b = &j;
	c = *b;
	*b = *a;
	*a = c;
	
	printf("After the swapping a = %d	b = %d\n",i,j);
}

