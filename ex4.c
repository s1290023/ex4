#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

   char name[100];
   
  printf("Who are you?\n");
  
  scanf("%s",name);

  printf("Hello, %s!\n",name);
  
  printf("Tossing a coin...\n");

  int i,j;
  int k=0;
  int l = 0;

  srand(time(NULL));
  
  for(i=0;i<3;i++){
    printf("Round %d:",i+1);
    
     j = rand();

     if(j%2 == 0){
      printf("Heads\n");
      k++;
    }

    else if(j%2 != 0){
      printf("Tails\n");
      l++;
    }

  }

  printf("Heads: %d, Tails: %d\n",k,l);
}
