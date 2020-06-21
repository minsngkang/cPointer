#include<stdio.h>

int main() {

    int i = 1;
    int* ptr = &i;
    printf("int i =1;\n");
    printf("int *ptr = &i;\n");
    printf("포인터가 가리키는 주소 = %p\n", ptr);
    printf("포인터의 값 %d\n", *ptr);
    printf("포인터의 주소= %p\n", &ptr);
    // printf("포인터의 주소의 주소 = %p\n", &&ptr); 이런건 없네, 꼬리에꼬리를 무는 포인터는 없네
    printf("포인터의 주소가 가리키는 값이 반환하는값 =%d\n", **&ptr);
    printf("변수주소에다가 *짓한거 %d\n", *&i);

    // int i =1;
    // int *ptr = &i;
    // 포인터가 가리키는 주소 = 0x7ffeea64165c
    // 포인터의 값 1
    // 포인터의 주소= 0x7ffeea641650
    // 포인터의 주소가 가리키는 값이 반환하는값 =1
    // 변수주소에다가 *짓한거 1

    
    int j = 2;
    int *ptr2 = &j;
    printf("int j =2;\n");
    printf("int *ptr = &j;\n");
    printf("포인터가 가리키는 주소 = %p\n", ptr2);
    printf("포인터의 값 %d\n", *ptr2);
    // printf("이건뭘까 %d\n", *j); 이런것도 없네

    // int j =2;
    // int *ptr = &j;
    // 포인터가 가리키는 주소 = 0x7ffeea64164c
    // 포인터의 값 2
}
