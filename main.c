#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int answer=59;
  int num;
  int trial=0;
  
  
  
  do{
     printf("Guess a number : ");
     scanf("%i", &num);
     trial++;
     
     if(num<answer)
         printf("low!\n");
     else if(num>answer)
         printf("high!\n");
  }while(num!=answer);
  
  printf("Congratulation! trials: %i\n", trial);
  
  system("PAUSE");	
  return 0;
}
