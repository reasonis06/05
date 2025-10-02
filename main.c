#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int num;
  int sum=0;
  int i;
  
  printf("input a number : ");
  scanf("%d", &num);
  
  for(i=1; i<=num; i++)
           sum += i;
  
  printf("The result is %d\n", sum);
  
  system("PAUSE");	
  return 0;
}
