#include <stdio.h>
#include <string.h>

int main(void){
    char name[20], place[20], verb[20], noun[20], sentance[500];
    printf("type a name: ");
    scanf("%s",name);
    printf("type a place: ");
    scanf("%s",place);
    printf("type a verb: ");
    scanf("%s",verb);
    printf("type a noun: ");
    scanf("%s",noun);
    strcat(sentance,name);
    strcat(sentance," went to the ");
    strcat(sentance,place);
    strcat(sentance," where they ");
    strcat(sentance,verb);
    strcat(sentance," and bought a ");
    strcat(sentance,noun);
    strcat(sentance,".");
    printf("%s",sentance);
    //printf("%s went to the %s where he %s and baught a %s.",name,place,verb,noun);
    return 0;
}