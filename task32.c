#include <stdio.h>
void swap(int *x, int *y)
{
int temp;
 temp=*x;
*x=*y;
*y=temp;
}
void main()
{ 
int r=10, v=20; 
swap(&r, &v);  
printf("\nValue of r: %d",r);
printf("\nValue of v: %d",v);
}
