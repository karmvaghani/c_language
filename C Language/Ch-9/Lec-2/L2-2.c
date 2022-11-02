#include <stdio.h>
#include<string.h>

main()
{
	char password[100], email[100];
	int ch=0;
	int dig=0;
	int at=0;
	int num=0;
	int i;
	
	printf("Enter email: ");
	gets(email);
	
	for(i==0; i<strlen(email); i++)
	{
		if(email[i] >= 65 && email[i]<=90 || email[i] >= 97 && email[i] <= 122)
		{
			ch++;
		}
		else if(email[i] >= 48 && email[i] <= 57)
		{
			dig++;
		}
		else if(email[i] == '@')
		{
			at++;
		}
	}
	if(ch>0 && dig>0 && at==1)
	{
		printf("Valid email id !! \n");
	}
	else
	{
		printf("Invalid email !!\n");
	}
	
	printf("Enter password : ");
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
	}
	if(ch>0 && dig>0 && num==0)
	{
		printf("Valid password !! \n");
	}
	else
	{
		printf("Valid password !!\n");
	}
	
	
}
