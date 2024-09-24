#include <stdio>
void hello(char name[]){
    printf("what is your name: ");
    scanf("%s", &name);
    printf("hello", name);
}

int main(void){
    hello;
    
    return 0;
}