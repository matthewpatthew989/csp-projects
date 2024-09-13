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
    total = income - (expenses + savings);
    printf("your income is: $%.2f\n");
    printf("here are your savings %.2f\n", savings);
    printf("here are your expences %.2f\n", expenses);
    printf("heres what you have left to spend %.2f\n", total);
    prent = rent/income;
    putilitys = utilitys/income;
    pgroseries = groseries/income;
    ptransportation = transportation/income;
    printf("this is the percent of your rent out of your income %.2f\n", prent);
    printf("this is the percent of your utilitys out of your income %.2f\n", putilitys);
    printf("this is the percent of your groseries out of your income %.2f\n", pgroseries);
    printf("this is the percent of your transportation out of your income %.2f\n", ptransportation);
    return 0;
}