#include<stdio.h>

main()
{
	int i,j,n,count;
	
	printf("Enter Array Size : ");
	scanf("%d",&n);
	
	int a[n],fre[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter Ellemets : ");
		scanf("%d",&a[i]);
		fre[i]=-1;
	}
	
	for(i=0; i<n; i++)
	{
		count = 1;
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				count++;
				fre[j]=0;
			}
		}
		if(fre[i]!=0)
		{
			fre[i]=count;
		}
	}
	printf("\nFrequency of all elemets : \n");
	for(i=0; i<n; i++)
	{
		if(fre[i]!=0)
		{
			printf("%d occurs %d times\n",a[i],fre[i]);
		}
	}
}
