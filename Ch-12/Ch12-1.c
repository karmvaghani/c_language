#include<stdio.h>

struct student{
	int id;
	char name[100];
	int age;
	char course[100];
	char city[100];
	int std;
	char school[100];
};

void main()
{
	int i,n;
	
	printf("Enter number of students : ");
	scanf("%d",&n);
	
	struct student s[n];
	
	for(i=0; i<n; i++)
	{
		system("cls");
		printf("\n%d / %d\n",i+1,n);
		
		printf("id : ");
		scanf("%d",&s[i].id);
		
		printf("name : ");
		scanf("%s",&s[i].name);
		
		printf("age : ");
		scanf("%d",&s[i].age);
		
		printf("course : ");
		scanf("%s",&s[i].course);
		
		printf("city : ");
		scanf("%s",&s[i].city);
		
		printf("std : ");
		scanf("%d",&s[i].std);
		
		printf("school : ");
		scanf("%s",&s[i].school);
	}
	
	system("cls");
	printf("ID\t Name\t Age\t Course\t City\t Std\t School\t\n------- ------- ------- ------- ------- ------- -------\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\t\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].std,s[i].school);
	}
}
