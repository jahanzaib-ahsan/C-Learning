#include <stdio.h>
int main()
{
    char a = '32';
    char* ptra = &a;
    printf("%d\n", ptra);
    ptra++;
    printf("%d\n", ptra);
    printf("%d", ptra-3);
    return 0;
}