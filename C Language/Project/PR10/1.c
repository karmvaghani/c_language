#include<stdio.h>

void main()
{
	FILE *fp;
	int n;
	
	fp = fopen("read.txt","w");
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	printf("Entered value : %d",n);
	fprintf(fp,"value : %d",n);
	
	fclose(fp);
}
