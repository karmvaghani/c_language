#include<stdio.h>

int main()
{
	int i,j,*a,*b,c;
	
	printf("Enter the value of a = ");
	scanf("%d",&i);
	printf("Enter the value of b = ");
	scanf("%d",&j);
	
	a = &i;
	b = &j;
	c = *b;
	*b = *a;
	*a = c;
	
	printf("After swapping \na = %d\nb = %d\n",i,j);
}
