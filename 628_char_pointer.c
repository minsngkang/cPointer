#include<stdio.h>

int main(){
    // \0이 자동을 들어가 있는 거심!
char strs[3][4] = {"Abc\0", "def\0", "ghi"};
char chrs[3][3] = {"Abc", "def", "ghi"};

// printf("strs=%c", (char)*strs);


int i, j;
printf("this is strs\n");
for ( i=0;i<3;i++){
    for (j=0;j<4;j++){
        printf("%c", strs[i][j]);
        // strs[i][j];
    }
    printf("\n");
}

printf("this is chrs\n");
for ( i=0;i<3;i++){
    for (j=0;j<3;j++){
        printf("%c", chrs[i][j]);
        // strs[i][j];
    }
    printf("\n");
}

}
/*출력값 
this is strs
Abc
def
ghi
this is chrs
Abc
def
ghi
행렬이랑 똑같음ㅋㅋ
*/


/* 문자열 포인터 왜쓰나?
We might instead use the array-of-pointers representation for an array of strings. 
As we previously discussed, representing multidimensional data with an array of pointers allows us 
to have items of different lengths, which naturally solves the problem of wasted space.
To represent our array of strings in this fashion, we might declare and initialize words as follows:

문자열포인터 말고 그냥 char [여긴 비우거나 안써두댐][최대치길이] <<== 최대치 할당하면 공간 낭비되기 때문. */

