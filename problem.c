#include <stdio.h>
#include <stdlib.h>

int prob1(){
  int sum;
  short i;
  for(i=1;i<1000;i++){
    if(i % 3 == 0){
      sum += i;
    }else if(i % 5 == 0){
      sum += i;
    }
  }
  return sum;
}

int prob2(){
  return 0;
}

int main(){
  int one = prob1();
  printf("My final sum is %d\n",one);
}
