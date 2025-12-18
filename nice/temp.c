#include <stdio.h>
int main(){
  char in1[20],in2[20],equal[20]="EQUAL",notequal[20]="NOT EQUAL";
  int i=0,valid;
    scanf("%s%s",in1,in2);  
    while(in1[i]!='\0'||in2[i]!='\0'){    
    if (in1[i]==in2[i]) valid=1;    
    else valid = 0;  
    }if (valid==1)  puts (equal);  
    else puts (equal);    
    return 0;}