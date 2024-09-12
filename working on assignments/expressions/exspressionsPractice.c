#include <stdio.h>
#include <math.h>

int main(void){
    int a = 7;
    int b = 24;
    int c = 8;
    int d = 4;
    int e = 6;
    int f = 18;
    int g = 3;
    int h = 2;
    int i = 5;
    int j = 12;
    int k = 72;
    int l = 9;
    int m = 17;
    int n = 1;
    int o = 15;
    int p = 22;
    int pwr = (int) (5,2);
    int pwrTwo = (int) (2,2);
    int pwrThre = (int) (1,4);
    int pwrFor = (int) (3,3);
    int pwrFiv = (int) (2,5);
    int pwrEx = (int) ((p/h-h*i),2);
    int pwrExtwo = (int) ((d-e/e),2);
    printf("%d", a-b/c*d+e);
    printf(" %d", f/g-a+h*5);
    printf(" %d", e*d/j+k/c-l);
    printf(" %d", (m-e/h)+d*g);
    printf(" %d", -h*(n*d-h/h)+(e+h-g));
    printf(" %d", -n*((g-d*a)/i)-h*b/e-h*b/e);
    printf(" %d", (g*pwr/o)-(i-pwrTwo));
    printf(" %d", (pwrThre*pwrTwo+pwrFor)-pwrFiv/d);
    printf(" %d", pwrEx+pwrExtwo);
    return 0;
}