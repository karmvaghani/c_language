#include<stdio.h>
#include<string.h>

void main()
{
	FILE *v,*c;
	
	v = fopen("vowels.txt","w");
	c = fopen("constant.txt","w");
	
	char n[50],i;
	
	printf("Enter any string : ");
	scanf("%[^\n]",&n);
	
	for(i=0;i<strlen(n);i++)
	{
		if(n[i]=='A'|| n[i]=='E'|| n[i]=='I'|| n[i]=='O'|| n[i]=='U'|| n[i]=='a'|| n[i]=='e'|| n[i]=='i'|| n[i]=='o'|| n[i]=='u')
		{
			fprintf(v,"\n%c\n",n[i]);
		}
		else
		{
			fprintf(c,"\n%c\n",n[i]);
		}
	}
	
	fclose(v);
	fclose(c);
}
