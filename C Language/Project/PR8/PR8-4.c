#include<stdio.h>
#include<string.h>

void main(){
	
	char str[100],i;
	char *ptr;
	int count=0;
	
	printf("Enter String : ");
	gets(str);
	
	ptr=&str;
	
	for(i=0; i<strlen(str); i++){
		count++;
		ptr++;
	}
	
	printf("Lenght of string : %d",count);
	
}

