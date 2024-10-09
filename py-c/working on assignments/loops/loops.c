#include <stdio.h>

char fam[9][20] = {"matthew","elizabeth","andrew","nathaneal","peter","alyssa","maren","amy","von"};
int i;

int main(void){
    for (i=0;i<9;i++){
        printf("hello %s!\n",fam[i]);
    }
    return 0;
}