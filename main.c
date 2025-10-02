#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int num;
  
  printf("input a integer : ");
  scanf("%i", &num);
  
  if(num>0)
       printf("plus\n");
  else if(num==0)
       printf("zero\n");
  else
       printf("minus\n");
  
  system("PAUSE");	
  return 0;
}
