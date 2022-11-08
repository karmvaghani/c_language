#include<stdio.h>

int add(int a,int b)
	{
		return a+b;
	}
int sub(int a,int b)
	{
		return a-b;
	}
int multi(int a,int b)
	{
		return a*b;
	}
int div(int a,int b)
	{
		return a/b;
	}

main()
{
	int n,choice;
	int a,b,answer;

	do{
	
	printf("Press 1 for Addition\n");
	printf("Press 2 for Subtraction\n");
	printf("Press 3 for Multiplication\n");
	printf("Press 4 for Division\n");
	printf("Press 5 for Exit\n");
	
	printf("What You Need : ");
	scanf("%d",&n);


	
	switch(n)
	{
		case 1 :
			printf("Enter Value A: ");
			scanf("%d",&a);
			printf("Enter Value B: ");
			scanf("%d",&b);
					answer = add(a,b);
					printf("Answer = %d\n ",answer );
				 	break;				 
		case 2 :
			printf("Enter Value A: ");
			scanf("%d",&a);
			printf("Enter Value B: ");
			scanf("%d",&b);
					answer = sub(a,b);
					printf("Answer = %d\n ",answer );
					break;
		case 3 :
			printf("Enter Value A: ");
			scanf("%d",&a);
			printf("Enter Value B: ");
			scanf("%d",&b);
					answer = multi(a,b);
					printf("Answer = %d\n ",answer );
					break;
		case 4 :
			printf("Enter Value A: ");
			scanf("%d",&a);
			printf("Enter Value B: ");
			scanf("%d",&b);
					answer = div(a,b);
					printf("Answer = %d\n ",answer );
					break;
		case 5 :
					break;
	}
	
	}while(n!=5);

}

