#include <stdio.h>

int main(){

    int a, b, check;

    printf("\n\nInput first integer: ");
    scanf("%d", &a);
    printf("Input second integer: ");
    scanf("%d", &b);

    if (a > b){
        check = a % b;
        if (check > 1){
            a = b;
            b = check;
            check = 1;
            printf("a = %d, b = %d, check = %d", a, b, check);
        }
        else {
        printf("HCF is: %d\n", b);
        }
    }
    if (b > a){
        check = b % a;
        if (check > 1){
            b = a;
            a = check;
            check = 1;
            printf("a = %d, b = %d, check = %d", a, b, check);
        }
        else {
        a = check;
        printf("HCF is: %d\n\n", a);
        }
    }
    else if(a == b){
       printf("HCF is: %d and %d\n\n", a, b); 
    }

    return 0;
}