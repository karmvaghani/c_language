#include<stdio.h>
#include<conio.h>

main()
{
	int choice;
	clrscr();

	tmp:

	printf("Press 1 for Soups \n");
	printf("Press 2 for Starters \n");
	printf("Press 3 for Drinks \n");
	printf("Enter your choice : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("1. Tomato Soup \t\t: 65\n");
			printf("2. Vegetable Soup \t: 65\n");
			printf("3. Sweet Corn Soup \t: 70\n");

			printf("Enter number form given options :");
			scanf("%d",&choice);

			printf("Your dish is added to cart.\n\n");

			printf("Enter 1 to go to menu page.\n");
			printf("Enter 0 to end your order.\n");
			scanf("%d",choice);

			if(choice == 1)
			{
				goto tmp;
			}
			else
			{
				printf("Your Order is confirmed ");
			}
			break;

		case 2:
			printf("1. Paneer Tikka Dry \t: 150\n");
			printf("2. Paneer Taka Tak \t: 160\n");
			printf("3. Hara Bhara Kabab \t: 150\n");

			printf("Enter number form given options :");
			scanf("%d",&choice);

			printf("Your dish is added to cart.\n\n");

			printf("Enter 1 to go to menu page.\n");
			printf("Enter 0 to end your order.\n");
			scanf("%d",choice);

			if(choice == 1)
			{
				goto tmp;
			}
			else
			{
				printf("Your Order is confirmed ");
			}
			break;

		case 3:
			printf("1. Coke \t: 40\n");
			printf("2. Diet Coke \t: 60\n");
			printf("3. 7 up \t: 40\n");
			printf("4. Cold Coffee \t: 80\n");

			printf("Enter number form given options :");
			scanf("%d",&choice);

			printf("Your dish is added to cart.\n\n");

			printf("Enter 1 to go to menu page.\n");
			printf("Enter 0 to end your order.\n");
			scanf("%d",choice);

			if(choice == 1)
			{
				goto tmp;
			}
			else
			{
				printf("Your Order is confirmed ");
			}
			break;
	}

	getch();

}