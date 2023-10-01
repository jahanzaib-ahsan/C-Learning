#include <stdio.h>
int main()
{
    int space_counter = 0;
    int asteric_counter = 0;
    int k = 0;
    do
    {
        printf(" ");
        space_counter++;
        if (space_counter == 4 || space_counter == 7 || space_counter == 9 || space_counter == 10)
        {
                if (asteric_counter == 0)
                {
                    printf("*\n");
                    asteric_counter += 2;
                }
                else if (asteric_counter == 2)
                {
                    printf("**\n");
                    asteric_counter += 3;
                }
                else if (asteric_counter == 5)
                {
                    printf("***\n");
                    asteric_counter += 4;
                }
                else if (asteric_counter == 9)
                {
                    printf("****\n");
                }

        }
 
        k = k + 1;
    } while (k < 10);

    return 0;
}