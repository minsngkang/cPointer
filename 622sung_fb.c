#include<stdio.h>

int main(void) {
const int MAX = 999;

printf("MAX=%d\n", MAX);

int* ptr = (int*)&MAX;

*ptr = 666;
printf("MAX=%d\n", MAX);
printf("*ptr=%d\n", *ptr);
printf("ptr=%p\n", ptr);
printf("&MAX=%p\n", &MAX);

return 0;
}

// 남궁 성님 피드백 컴파일러 버젼이 올라가면서 좀 바뀐 것 같습니다.(Apple clang version 11.0.0 (clang-1100.0.33.12))
// 아래의 결과를 보시면 포인터 ptr의 값과 &MAX의 값이 같은데, 즉, 주소가 같은데 *ptr과 MAX의 값이 다르네요.

/* 실행결과
MAX=999
MAX=999
*ptr=666
ptr=0x7ffee97daa58
&MAX=0x7ffee97daa58
*/
