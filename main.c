#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int a,b;
  char cal;
  
  printf("enter the calculation : ");
  scanf("%i %c %i", &a, &cal, &b);
  
  if(cal == '+')
         printf("= %i\n",a+b);
  else if(cal == '-')
         printf("= %i\n",a-b);
  else if(cal == '*')
         printf("= %i\n",a*b);
  else if(cal == '/')
         printf("= %i\n",a/b);
  
  system("PAUSE");	
  return 0;
}
