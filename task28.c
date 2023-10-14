#include <stdio.h>
int main()
{
   
    int arr[] = {0,1,2,3,4,5,6,7};
    
    printf("The address of first element of the array is %d \n", &arr[0]);
    printf("The address of first element of the array is %d \n", arr);
    printf("The address of second element of the array is %d \n", &arr[1]);
    printf("The address of second element of the array is %d \n", arr + 1);
    printf("The address of third element of the array is %d \n", &arr[2]);
    printf("The address of third element of the array is %d \n", arr + 2);
    printf("The address of fourth element of the array is %d \n", &arr[3]);
    printf("The address of fourth element of the array is %d \n", arr + 3);
    

    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", arr[0]);
    printf("The value at address of first element of the array is %d \n", *(arr));
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", arr[1]);
    printf("The value at address of third element of the array is %d \n", *(&arr[2]));

    return 0;
}
