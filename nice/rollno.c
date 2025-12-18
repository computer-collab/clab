#include <stdio.h>
#define MAX 100
int main(){
  int size=100;
// scanf("%d", &size);
  int array[size],sum=0;
  for (int index=0;index<size;index++){
    scanf("%d",&array[index]);
    sum=sum+array[index];
  }printf("%d",sum);
  return 0;
}