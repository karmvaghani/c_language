#include<stdio.h>

struct employee{
	int id;
	char name[100];
	int age;
	char role[100];
	char city[100];
	float exp;
	char cmpname[100];
};

void main()
{
	int i,n;
	
	printf("Enter number of Employee's : ");
	scanf("%d",&n);
	
	struct employee e[n];
	
	for(i=0; i<n; i++)
	{
		system("cls");
		printf("\n%d / %d\n",i+1,n);
		
		printf("id : ");
		scanf("%d",&e[i].id);
		
		printf("name : ");
		scanf("%s",&e[i].name);
		
		printf("age : ");
		scanf("%d",&e[i].age);
		
		printf("Role : ");
		scanf("%s",&e[i].role);
		
		printf("city : ");
		scanf("%s",&e[i].city);
		
		printf("exprience : ");
		scanf("%f",&e[i].exp);
		
		printf("Company name : ");
		scanf("%s",e[i].cmpname);
	}
	
	system("cls");
	printf("ID\t Name\t Age\t Role\t City\t Exp\t CompanyName\t\n------- ------- ------- ------- ------- ------- ------------\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t%s\t%d\t%s\t%s\t%.2f\t%s\t\n",e[i].id,e[i].name,e[i].age,e[i].role,e[i].city,e[i].exp,e[i].cmpname);
	}
}
