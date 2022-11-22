#include <stdio.h>

int main(void)
{
	char str[][50]=
	{
    	"My name is karm vaghani.",
    	"I Graduated From Red and White.",
        "I Now Live In Surat."
    };
	int strcount = sizeof(str)/sizeof(str[0]);
	int i=0;
	int count=0;         

	for(;i<strcount;++i)
	{
		while(str[i][count] != '\0')
    
		++count;

    	printf("\n\nNumber of Characters in STR[%d] = %d",i,count);
  	}

  	return 0;
}

