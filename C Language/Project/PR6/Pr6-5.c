#include <stdio.h>

int main(void)
{
  char str[][30]={
                   "My name is Abcd Efgh Jklm.",
                   "I Graduated from BIT.",
                   "I now live in Balochistan."
                 };
  int strcount=sizeof(str)/sizeof(str[0]);
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

