#include<stdio.h>

main()
{
	int i,n,m1,m2;

	printf("Enter Array Size : ");
	scanf("%d",&n);
	
	int a[n];

	for(i=0; i<n; i++)
	{
		printf("Enter Value : ");
		scanf("%d",&a[i]);
	}
	
	m1=m2;

	for(i=0; i<n; i++)
	{
		if(m1<a[i])
		{
			m2=m1;
			m1=a[i];
		}
		else if(a[i]>m2&&a[i]<m1)
		{
			m2=a[i];
		}
	}
	printf("Second Lagest num = %d",m2);

}
