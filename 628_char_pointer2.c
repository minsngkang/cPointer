//TL; DR. * * * * 이런식으로 훑고가고 , **는 미세표적을 훑고가는거군 ** ** **

#include<stdio.h>

int main(){

const char * words2[] = {"A", "cat", "likes", "sleeping.", NULL};
// 혹은
const char* words3[] = {"B", "dog", "likes", "stockings.", NULL};


const char ** ptr = words3;

while (*ptr != NULL) { // * * * * 이런식으로 훑고가고 , **는 미세표적을 훑고가는거군 ** ** **
  printf("%s ", *ptr);
  ptr++;
}

printf("\n");

}

/* 

*의 결과물
B dog likes stockings. 

**의 결과물
B d l s 

/*
