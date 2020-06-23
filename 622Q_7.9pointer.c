// TL; DR. *PTR = 300; 
// 포인터 관련 질답 첫번째
// 메모리가 가리키는 값을 바꿔버리면, 해당 메모리 주소를 참조하고 있던 애들 다바뀜

#include<stdio.h>

int main(void) {
    const int MAX = 999;
    int i = 100;

    const int* pci;
    int* ptr;

    const int* const PCI = &MAX;
          int* const PTR = &i;

    printf("MAX=%d\n", MAX);
    printf("i=%d\n", i);

    pci = &MAX;  
    // printf("pci=%p\n", pci);
    ptr = (int*) &MAX;
    // printf("ptr=%p\n",ptr);

    *ptr = 666; 
    printf("*ptr중간=%d\n", *ptr);
    pci = &i;
    ptr = &i;

    // *pci = 200; 불가능
    *ptr = 200;
    printf("MAX=%d\n", MAX);
    printf("i=%d\n",i);
    printf("*ptr중간2=%d\n",*ptr);

    *PTR = 300; // 메모리가 가리키는 값을 바꿔버리면, 해당 메모리 주소를 참조하고 있던 애들 다바뀜
    printf("MAX=%d\n",MAX);
    printf("i=%d\n",i);
    printf("*ptr값은=%d\n", *ptr);
    printf("맥스주소=%p\n", &MAX);
    printf("i주소=%p\n", &i);
    printf("PTR값=%p\n", PTR);
    printf("ptr값=%p\n",ptr);
    // *& 요상한짓 안하고 그냥 바로 &i한거는 이상이 없다? 음 그것도 아닌것 같다.
    return 0;
}
