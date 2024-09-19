#include <stdio.h>
#include <string.h>

int main(void){
    char name[20], place[20], verb[20], noun[20], sentance[500];
    printf("type a name: ");
    scanf("%s",name);
    printf("type a place: ");
    fgets(place,sizeof(place),stdin);
    printf("type a verb: ");
    fgets(verb,sizeof(verb),stdin);
    printf("type a noun: ");
    fgets(noun,sizeof(noun),stdin);
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