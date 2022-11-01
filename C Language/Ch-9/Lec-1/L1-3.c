#include<stdio.h>

main()
{
	char name[100];
	
	printf("Enter character in lower case : ");
	scanf("%s",&name);
	
	int i;
	
	for(i=0; i<strlen(name); i++)
	{
		name[i] -=32;
	 } 
	printf("Character in upper case : %s",name);
}
