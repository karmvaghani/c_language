#include<stdio.h>

main()
{
	int i,val,pos,n,c;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter Value : ");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nEnter 1 for Insert\n");
	printf("Enter 2 for Update\n");
	printf("Enter 3 for Delete\n");
	printf("\nEnter choise : ");
	scanf("%d",&c);
	switch(c)
	{
		case 1 :
				printf("\nEnter Position : ");
				scanf("%d",&pos);
				printf("Enter Value : ");
				scanf("%d",&val);
				
				for(i=n-1; i>=pos; i--)
				{
					a[i+1] = a[i];
				}
				n++;
				a[pos] = val;
				break; 
			
		case 2 :
				printf("\nEnter Position : ");
				scanf("%d",&pos);
				printf("Enter Value : ");
				scanf("%d",&val);
				
				a[pos] = val;
				break;
				
		case 3 :
				printf("\nEnter Position : ");
				scanf("%d",&pos);
				
				for(i=pos; i<n; i++)
				{
					a[i] = a[i+1];
			    }
			    n--;
			    break;
		default :
			printf("Invalid input :<````");
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
