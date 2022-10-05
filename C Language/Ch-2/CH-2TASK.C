#include <stdio.h>
#include <conio.h>

main()
{
	int a = 10;
	int b = 5;
	float pi = 3.14;
	char c = 'C';

	clrscr();
	printf("A\t\t : %d\n",a);
	printf("B\t\t : %d\n",b);
	printf("Character\t : %c\n\n",c);
	printf("Addition of A & B\t : %d\n",a + b);
	printf("Subtraction of A & B\t : %d\n",a - b);
	printf("Multiplication of A & B\t : %d\n", a * b);
	printf("Division of A & B\t : %d\n",a/b);
	printf("Value of pi\t\t : %.2f\n",pi);


	getch();

}