#include<stdio.h>

struct dis{
	float inch;
	float feet;
};

int main()
{
	struct dis d1,d2,d3;
	
	printf("Value of inch : ");
	scanf("%f",&d1.inch);
	printf("Another value of inch : ");
	scanf("%f",&d2.inch);
	
	printf("Value of feet : ");
	scanf("%f",&d1.feet);
	printf("Another value of feet : ");
	scanf("%f",&d2.feet);
	
	d3.inch = d1.inch + d2.inch;
	d3.feet = d1.feet + d2.feet;
	
	while(d3.inch >= 12)
	{
		d3.inch = d3.inch - 12;
		d3.feet += 1;
	}
	
	printf("Total inch = %.2f\n",d3.inch);
	printf("Total feet = %.2f\n",d3.feet);
	
}
