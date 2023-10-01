#include<stdio.h>
int main()
{
int i=0;
do 
{
     printf("%d",i);
     if(i==0||i==2||i==5||i==9||i==14){
      printf("\n");
     }
     i++;
} while (i<15);

return 0;
} 