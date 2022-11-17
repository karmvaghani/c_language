#include<stdio.h>

union marks
{
	int roll_no;
	char name[100];
	int chem_marks;
	int maths_marks;
	int phy_marks;
	int per ;
};
void main()
{
	union marks m[5];
	int i;
	float per[5];
	for(i=1; i<=5; i++)
	{
		printf("%d/5\n",i);
		
		printf("roll no. : ");
		scanf("%d",&m[i].roll_no);
		printf("name : ");
		scanf("%s",&m[i].name);
		printf("chemistry marks : ");
		scanf("%d",&m[i].chem_marks);
		printf("maths marks : ");
		scanf("%d",&m[i].maths_marks);
		printf("physics marks : ");
		scanf("%d",&m[i].phy_marks);
	}
	for(i=1; i<=5; i++)
	{
		per[i]=((m[i].chem_marks + m[i].maths_marks + m[i].phy_marks)/300)*100;
	}
	for(i=1; i<=5; i++)
	{
		printf("Percentage of student %d = %.2f\n",i,per[i]);
	}
}
