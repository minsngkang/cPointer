// TL; DR. *ptr=i. int i2=*ptr이렇게 눈속임해도 i와 다른주소.

#include<stdio.h>

int main(){

    const int i = 100;
    int* ptr = (int*)&i;
    int* PTR = (int*)&i;
    int i2 = *ptr;
    *PTR = 300; // 
    *ptr = 122;
    printf("i=%d\n",i);
    printf("i2=%d\n",i2);
    printf("ptr값=%p\n",ptr);
    printf("PTR주소=%p\n",PTR);
    printf("i2주소=%p\n",&i2);
    printf("i주소=%p\n",&i);
    printf("*PTR값=%d\n", *PTR);
    printf("*ptr값=%d\n",*ptr);
    // *ptr = i이라는 사실만 취할 수 있다. i2랑 i주소는 원체 다르기 때문에 값은 다를수밖에 없는 것
    
    *ptr = 999;
    printf("i=%d\n",i);
    printf("i2=%d\n",i2);
    printf("ptr값=%p\n",ptr);
    printf("PTR주소=%p\n",PTR);
    printf("i2주소=%p\n",&i2);
    printf("i주소=%p\n",&i);

    // 더욱더 아노미로 가자..
    puts("");
    ptr = (int*)&i;
    printf("*ptr값=%d\n",*ptr);
    printf("*PTR값=%d\n",*PTR);
    printf("i값=%d\n",i);

}
