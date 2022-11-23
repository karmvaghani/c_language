#include<stdio.h>

void main()
{
	FILE *fp, *f2;
	int a;
	
	fp = fopen("D:\\C Language\\All Files\\Ch-13\\read.txt","r");
	f2 = fopen("D:\\C Language\\All Files\\Ch-13\\write.txt","a");
	
	fscanf(fp,"%d",&a);
	
	printf("DATA : %d",a);
	
	fprintf(f2,"%d",a);
	
	fclose(fp);
	fclose(f2);
	
}
