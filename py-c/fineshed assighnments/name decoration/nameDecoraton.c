#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    char decorates[5];
    printf("please tell me your name: ");
    fgets(name, sizeof(name), stdin);
    printf("what do you want to decorate your name: ");
    fgets(decorates, sizeof(decorates), stdin);
    strcat(name, decorates);
    strcat(decorates, name);
    printf("%s", decorates);
    return 0;
}