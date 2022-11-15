#include<stdio.h>

void main(){
	
	int arr[100],n,i;
	int *p=&arr;
	
	printf("Enter Array Size : ");
	scanf("%d",&n);
	
	
	for(i=0; i<n; i++){
		printf("a[%d] : ",i);
		scanf("%d",&(*p));
		p++;
	}
	
	p=arr;
	
	for(i=0; i<n; i++){
		printf("%d ",*p);
		p++;
	}
	
}
