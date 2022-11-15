#include<stdio.h>

void main(){
	
	int arr[100],i,n;
	int *a;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	a=arr;
	
	for(i=0; i<n; i++){
		printf("a[%d] : ",i);
		scanf("%d",&(*a));
		a++;
	}
	
	a=&arr[n-1];
	
	for(i=0; i<n; i++){
		printf("%d ",*a);
		a--;
	}
	
}
