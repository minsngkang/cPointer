#include<stdio.h>

int main() {
    int i = 200;
    int* ptr = &i;

    // 어차피 값이라서 둘은 동일함
    // i = i+1하고 똑같음 ㅋ
    *ptr = *ptr + 1;

    printf ("i     =%d\n", i);
    printf( "*ptr = %d\n", *ptr);
    printf("&i = %p\n", &i);
    printf("ptr = %p\n", ptr);
}

// i     =201
// *ptr = 201
// &i = 0x7ffeed31465c
// ptr = 0x7ffeed31465c
