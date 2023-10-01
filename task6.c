#include <stdio.h>
int main()
{
    int i = 0;
    int f = 0;
    do
    {
        i = i + 1;
        printf("*");
        f = f + 1;
        if (i == 6)
        {
            printf("\n");
            i = 0;
        }
        
    } while (f < 36);

    return 0;
}
