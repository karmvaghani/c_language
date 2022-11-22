#include<stdio.h>

void main()
{
	FILE *f1,*f2;
	int n;
	
	f1 = fopen("reading.txt","r");
	f2 = fopen("copy.txt","a");
	
	fscanf(f1,"%d",&n);
	printf("Value from reading is : %d",n);
	
	fprintf(f2,"copied : %d",n);
	
	fclose(f1);
	fclose(f2);
}
