#include<stdio.h>

int main()
{
	int a;
	int *sq;
	printf("Enter the value = ");
	scanf("%d",&a);
	sq = &a;
	printf("Square of %d => %d",a,(*sq)*(*sq));
}
