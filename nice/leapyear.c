#include <stdio.h>
int main (){
  int year;
  scanf("%d",&year);
  if (year>0){
  printf("%s",(year%4 ==0)?"Leap Year":"Not a Leap Year");
  }else return 0;
  return 0;
}