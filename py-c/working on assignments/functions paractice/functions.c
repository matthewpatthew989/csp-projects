#include <stdio.h>

char name;

void hello(char type[]){
    printf("hello %s\n",type);
}

int main(void){
    hello("mathew");
    hello("andrew");
    hello("nathaneal");
    hello("peter");
    hello("von");
    return 0;
}