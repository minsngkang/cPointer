#include<stdio.h>

int main() {

    int arr[4] = {0,1,2,3};
    int *ptr = &arr[0];

    printf("%p\n", &arr[0]);
    printf("%p\n", ptr);

    return 0;


}
