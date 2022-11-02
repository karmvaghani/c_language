#include<stdio.h>
#include<string.h>

main()
{
	char password[100];
	int i;
	int ch=0;
	int dig=0;
	int num=0;
	int sp=0;
	
	printf("Enter a password which contains a character, a digit and a special number. \n\n");
	printf("Enter your password : ");
	gets(password);
		
	for(i==0; i<strlen(password); i++)
	{
		if(password[i] >= 65 && password[i]<=90 || password[i] >= 97 && password[i] <= 122)
		{
			ch++;
		}
		else if(password[i] >= 48 && password[i] <= 57)
		{
			dig++;
		}
		else if(password[i] >= 48 && password[i] <= 57)
		{
			num++;
		}
		else if(password[i] >= 33 && password[i] <= 47)
		{
			sp++;
		}
	}
	if(ch>0 && dig>0 && num>0 && sp==0)
	{
		printf("Valid password !! \n");
	}
	else
	{
		printf("Valid password !!\n");
	}
}
