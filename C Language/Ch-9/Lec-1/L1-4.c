#include<stdio.h>

main()
{
	char name[100];
	
	printf("Enter character in upper case : ");
	scanf("%s",&name);
	
	int i;
	
	for(i=0; i<strlen(name); i++)
	{
		name[i] +=32;
	 } 
	printf("Character in lower case : %s",name);
}
