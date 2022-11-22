#include<stdio.h>

void main()
{
	FILE *a;
	char name[100];
	
	a = fopen("append.txt","a");
	
	printf("Enter name : ");
	scanf("%s",&name);
	
	fprintf(a,"Entered txt is : %s",name);
	
	fclose(a);
	
}
