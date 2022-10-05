#include<stdio.h>
#include<conio.h>

main()
{
	float P,R,T,SI;

	clrscr();

	printf("P : ");
	scanf("%f",&P);
	printf("R : ");
	scanf("%f",&R);
	printf("T : ");
	scanf("%f",&T);

	SI = (P*R*T)/100;
	printf("Simple Interst is : %.2f",(P*R*T)/100);

	getch();

}