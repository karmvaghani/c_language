#include<stdio.h>

main()
{
	char name[100];
	
	printf("Enter name : ");
	scanf("%s",&name);
	
	int i;
	
	for(i=0; i<strlen(name); i++)
	{
		if(name[i] >= 65 && name[i] <= 90 )
		{
			name[i] += 32;
		}
		else if(name[i] >= 97 && name[i] <= 122)
		{
			name[i] -= 32;
		}
	} 
	printf("Character in toggle case : %s",name);
}
