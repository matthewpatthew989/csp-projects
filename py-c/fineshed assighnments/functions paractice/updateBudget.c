#include <stdio.h>
float income, rent, groseries, transportation, utillities, expenses, savings, total;

float input(char type[],float var){
    printf("how much is your %s: \n", type);
    scanf("%f",&var);
}

void percent(char type[],int amount){
    int per = amount/income*100;
    printf("your percent %s is %d%% of your income\n",type, per);
}

int main(void){
    printf("this is your new finacial calculator");
    income = input("income",income);
    rent = input("rent",rent);
    groseries = input("grosseries",groseries);
    transportation = input("transportation",transportation);
    utillities = input("utilities",utillities);
    expenses = rent + groseries + transportation +utillities;
    savings = income*0.2;
    total = income - (expenses + savings);
    printf("your income is: %.2f\n",income);
    printf("here are your savings %.2f\n", savings);
    printf("here are your expences %.2f\n", expenses);
    printf("heres what you have left to spend %.2f\n", total);
    percent("rent",rent);
    percent("utillities",utillities);
    percent("groseries",groseries);
    percent("transeportation",transportation);
    return 0;
}