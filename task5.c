#include<stdio.h>
int main()

{
  int i=15;
  do
  {
    printf("*");
    if(i==11||i==7||i==4||i==2||i==1){
        printf("\n");
    }
    i=i-1;
  } while (i>0);
  
    return 0;
}