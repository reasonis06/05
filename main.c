#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int num;
  
  printf("input a integer : ");
  scanf("%i", &num);
  
  if(num>0)
       printf("absolute is %i\n", num);
  else
       printf("absolute is %i\n", -num);
  
  system("PAUSE");	
  return 0;
}
