#include <stdio.h>
#include <string.h>
#include <time.h>

int i, usr;
char one[50], two[50], three[50];

void delay(int sec){
    int milli = 1000*sec;

    clock_t start = clock();

    while (clock()< start+milli);
}

int main(void){
    printf("pick a number any number! ");
    scanf("%d",&usr);
    printf("pick a word any word! ");
    scanf("%s",one);
    printf("pick a word any word! ");
    scanf("%s",two);
    strcat(three,one);
    strcat(three,two);
    //create a loop that counts to 50
    for (i=1;i<=usr;i++){
        
        //replace numbers divisible by both with fizzbuzz
        if (i%3==0 && i%5==0){
            printf("%s\n",three);
        //replace numbers divisible by three with fiss
        }else if (i%3==0){
            printf("%s\n",one);
        //replace numbers divisible by five with buzz
        }else if (i%5==0){
            printf("%s\n",two);
        //print the other numbers
        }else{
        printf("%d\n",i);
        }
        delay(30);
    }
    return 0;
}