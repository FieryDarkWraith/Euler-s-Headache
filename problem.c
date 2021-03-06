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
  int sum;
  int f1 = 2;
  int f2 = 1;
  int storage;
  while(f1 < 4000000 && f2 < 4000000){
    if(f1 % 2 == 0){
      sum += f1;
    }
    storage = f1;
    f1 += f2;
    f2 = storage;
    //printf("F1:%d,F2:%d\n",f1,f2);
  }
  
  return sum;
}

int prob6(){
  int sum1 = 0;
  int sum2 = 0;
  char i;
  for(i = 1;i<101;i++){
    sum1 += (i * i);
    sum2 += i;
  }
  //printf("Sum 2:%i\n",sum2);
  sum2 = sum2 * sum2;
  int result = sum2 - sum1;
  return result;
}

int main(){
  int one = prob1();
  printf("My final sum is %d\n",one);
  int two = prob2();
  printf("My final sum is %d\n",two);
  int six = prob6();
  printf("My final difference is %d\n",six);
}
