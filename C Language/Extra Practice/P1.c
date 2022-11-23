#include<stdio.h>

struct emp
{
	float hra,dt,ta,gs;
	int id,bs,i;
	char name[50],dept[50];
};

void main()
{
	FILE *f1;
	
	f1 = fopen("employee.txt","a");
	
	int n,i;
	
	printf("Enter number of employee : ");
	scanf("%d",&n);
	
	struct emp e[n];
	
	for(i=0; i<n; i++)
	{
		system("cls");
		printf("Employee %d\n",i+1);
		
		printf("Enter Employee id : ");
		scanf("%d",&e[i].id);
		printf("Enter employee name :");
		scanf("%s",e[i].name);
		printf("Enter employee department :");
		scanf("%s",e[i].dept);
		printf("Enter employee base salary :");
        scanf("%d", &e[i].bs);
        printf("Enter employee HRA :");
        scanf("%f", &e[i].hra);
        printf("Enter employee DT :");
        scanf("%f", &e[i].dt);
        printf("Enter employee TA :");
        scanf("%f", &e[i].ta);
	}
	system("cls");
	printf("percentage\n\n");
	for (i=0;i<n;i++){
		float hra=(e[i].bs*e[i].hra)/100;
	    float dt=(e[i].bs*e[i].dt)/100;
     	float ta=(e[i].bs*e[i].ta)/100;
		 e[i].gs =e[i].bs + e[i].hra + e[i].dt + e[i].ta;
	}  
	system("cls");
	fprintf(f1,"id\tname\tdept\tbs\thra\tdt\tta\tgs\n\n");
	for (i=0;i<n;i++)
	{
		fprintf(f1,"%d\t%s\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n",e[i].id,e[i].name,e[i].dept,e[i].bs,e[i].hra,e[i].dt,e[i].ta,e[i].gs);
	}
	
}

