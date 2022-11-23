#include<stdio.h>

struct student{
	int id;
	char name[50];
	int sub1;
	int sub2;
	int sub3;
	int sub4;
	int sub5;

};

void main(){

	FILE *p;
	int total[500];
	float per[100];

	p = fopen("mark.txt","a");

	int n,i;
	printf("Number of Student : ");
	scanf("%d",&n);

	struct student s[n];

	for(i=0; i<n; i++){
		system("cls");
		printf("Enter [%d] student id : ",i+1);
		scanf("%d",&s[i].id);
		printf("Enter [%d] student name : ",i+1);
		scanf("%s",&s[i].name);
		printf("Enter [%d] sub 1 mark : ",i+1);
		scanf("%d",&s[i].sub1);
		printf("Enter [%d] sub 2 mark : ",i+1);
		scanf("%d",&s[i].sub2);
		printf("Enter [%d] sub 3 mark : ",i+1);
		scanf("%d",&s[i].sub3);
		printf("Enter [%d] sub 4 mark : ",i+1);
		scanf("%d",&s[i].sub4);
		printf("Enter [%d] sub 5 mark : ",i+1);
		scanf("%d",&s[i].sub5);

	}

	fprintf(p,"ID\tNAME\tSUB1\tSUB2\tSUB3\tSUB4\tSUB5\tTOTAL\tPER\tGRADE\n----------------------------------------------------------------------------------------------------\n");
	char grade[10];
	for(i=0 ; i<n; i++){
		total[i] = s[i].sub1+s[i].sub2+s[i].sub3+s[i].sub4+s[i].sub5;
		per[i] = total[i]/5;


		fprintf(p,"%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\t%c\t",s[i].id,s[i].name,s[i].sub1,s[i].sub2,s[i].sub3,s[i].sub4,s[i].sub5,total[i],per[i]);

			if(per[i]>=90){
			fprintf(p,"A\n");
		}
		else if(per[i]>=80){
			fprintf(p,"B\n");
		}
		else if(per[i]>=70){
			fprintf(p,"C\n");
		}
		else if(per[i]>=60){
			fprintf(p,"D\n");
		}
		else if(per[i]>=50){
			fprintf(p,"E\n");
		}
		else if(per[i]>=40 && total[i]<=33){
			fprintf(p,"F\n");
		}
		else{
			fprintf(p,"FAIL\n");
		}

	}
}
