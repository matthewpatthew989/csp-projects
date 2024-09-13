#include <stdio.h>

int main(void){
    float income, rent, utilitys, groseries, transportation, expenses, savings, total;
    float prent, putilitys, pgroseries, pexpenses, ptransportation;
    printf("this is youer new finacial calculator");
    printf("how much do you make a month\n");
    scanf("%f", &income);
    printf("whats your rent?\n");
    scanf("%f", &rent);
    printf("how much are groceries?\n");
    scanf("%f", &groseries);
    printf("how much is transportation?\n");
    scanf("%f", &transportation);
    printf("what are the expenses of your utilities\n");
    scanf("%f", &utilitys);
    expenses = rent + groseries + transportation +utilitys;
    savings = income*0.2;
    printf("here are your expences", expenses);
    printf("your income is: $%.2f\n");
    prent = rent/income;
    putilitys = utilitys/income;
    pgroseries = groseries/income;
    ptransportation = transportation/income;

    return 0;
}