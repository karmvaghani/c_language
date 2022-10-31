#include<stdio.h>

main()
{
	char a;
	
	printf("Enter character in upper case : ");
	scanf("%c",&a);
	
	a +=32 ; 
	printf("Character in lower case : %c",a);
}
