#include <stdio.h>
int age;
int main(void){
    printf("what is your age: ");
    scanf("%d",age);
    if (age >= 18){
        printf("you can vote!");
    }else if (age >= 16){
        printf("you can drive!");
    }else if (age >= 15){
        printf("you can get a learners permit!");
    }else if (age >= 5){
        printf("you can go to school!");
    }else{
        printf("you cant do anything");
    }
    return 0;
}