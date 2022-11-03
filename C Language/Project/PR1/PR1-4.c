#include<stdio.h>
#include<conio.h>

main()
{
	int base_salary,hra,da,ta,gross_salary;
	clrscr();

	printf("Enter your Base Salary : ");
	scanf("%d",&base_salary);

	hra=base_salary*10/100;
	da=base_salary*5/100;
	ta=base_salary*8/100;

	gross_salary=base_salary+hra+da+ta;

	printf("\nGross Salary = %d",gross_salary);

	getch();
}
