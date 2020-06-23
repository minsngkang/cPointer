// 포인터 관련 질답 두번째
// TL;DR. 주소는 같은데 값이 다른 경우가 발생.. 이런 경우가 있단 말인가

#include<stdio.h>

int main(void) {
    const int MAX = 999;
    int i = 100;

    int* ptr;
    printf("초기");
    printf("선언된 ptr값=%p\n", ptr);

    int* PTR = &i; //i의 주소를 PTR에 넣음
    printf("i주소 기준 선언된 PTR값=%p\n", PTR);
    printf("MAX=%d\n", MAX);
    printf("i=%d\n", i);
    puts("");

    printf("ptr값에 MAX주소를 넣음\n");
    ptr = (int*) &MAX;
    printf("맥스 기준 ptr=%p\n",ptr);

    printf("포인터가 가리키는 값666으로 바꿔버림\n");
    *ptr = 666; 
    printf("*ptr중간=%d\n", *ptr);
    printf("ptr값=%p\n", ptr);
    printf("MAX주소=%p\n", &MAX);
    printf("PTR값=%p\n", PTR);
    printf("*PTR값=%d\n", *PTR);
    puts("");

    printf("MAX기준으로 썼던 주소를 i주소로 바꿔버리기\n");
    ptr = &i; //ptr에도 i주소를 넣음 
    *ptr = 200;
    printf("i=%d\n",i);
    printf("*ptr중간2=%d\n",*ptr);
    printf("ptr값=%p\n", ptr);
    printf("PTR값=%p\n", PTR);
    printf("*PTR값=%d\n", *PTR);
    printf("MAX=%d\n", MAX);
    printf("MAX주소=%p\n", &MAX);
    puts("");


    printf("맥스주소를가져와서 넣은 PTR값=주소 랑 MAX주소는 같은데 MAX값은999고 *PTR값은 300으로 다름\n");
    printf("이를 뭐라 이해해야 하지,,, 비둘기집의 원리같은건가");
    PTR = (int*)&MAX;
    *PTR = 300;
    printf("MAX=%d\n",MAX);
    printf("i=%d\n",i);
    printf("*ptr값은=%d\n", *ptr);
    printf("ptr값=%p\n", ptr);
    printf("PTR값=%p\n", PTR);
    printf("*PTR값=%d\n",*PTR);
    printf("MAX주소=%p\n", &MAX);
    puts("");

    return 0;
}
