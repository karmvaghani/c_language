#include<stdio.h>

main()
{
	char a;
	
	printf("Enter character in lower case : ");
	scanf("%c",&a);
	
	a -=32 ; 
	printf("Character in upper case : %c",a);
}
