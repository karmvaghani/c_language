#include<stdio.h>

void main(){
	
	FILE *p1,*p2;
	
	p1 = fopen("read.txt","r");
	p2 = fopen("write.txt","w");
	
	int a,b,c=0;
	
	fscanf(p1,"%d",&a);
	
	while(a!=0){
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	fprintf(p2,"%d \n",c);
	
}
