#include<stdio.h>
struct emp {
	int id;
	char name[100];
	int age;
	char role[100];
	char address[100];
	int  salary;
	char email[100];
	
};
void main(){
	int n,i;
	printf("enter number of employee :");
	scanf("%d",&n);
	
	struct emp e[n];
	for (i=0;i<n;i++)
	{
		system("cls");
		printf("Enter Employee Name : ");
		scanf("%s",&e[i].name);
		printf("Enter Employee id : ");
		scanf("%d",&e[i].id);
		printf("Enter Employee Age : ");
		scanf("%d",&e[i].age);
		printf("Enter Employee Role : ");
		scanf("%s",&e[i].role);
		printf("Enter Employee Address : ");
		scanf("%s",&e[i].address);
		printf("Enter Employee Salary : ");
		scanf("%d",&e[i].salary);
		printf("Enter Employee Email Address: ");
		scanf("%s",&e[i].email);
	}
	system("cls");
	printf("id\t name\t role\t exp\t name\t age\t city\n-----------------------------------------------------------\n");
	for (i=0;i<n;i++){
		printf("%d\t%s\t%s\t%d\t%s\t%d\t%s\n",e[i].id,e[i].name,e[i].role,e[i].salary,e[i].email,e[i].age,e[i].address);
	}
}
