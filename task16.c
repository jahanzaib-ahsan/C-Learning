#include <stdio.h> 
int sum (int a , int b);
void printstar(int n)
{
    for ( int i = 0; i < n; i++)
    {
      printf("%c\n",'*');
    }
    
    printf("%c\n",'*');
}
int main()
{
    int a, b, c;
    a = 1;
    b = 2;
    c = sum(a, b);
    printstar(15);
    // printf("The sum is : %d\n", c);
    return 0;
}
int sum(int a, int b)
{
  return a + b;
}
