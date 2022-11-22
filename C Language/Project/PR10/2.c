#include<stdio.h>

void main()
{
	FILE *r;
	int n;
	
	r = fopen("only read.txt","r");
	
	fscanf(r,"%d",&n);	
	printf("Entered value : %d",n);

	fclose(r);
}
