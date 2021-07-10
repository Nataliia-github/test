#include <stdio.h>

int main(){

    int i, f3, f1 = 0, f2 = 1, number;

    printf("\n\nInput number of numbers fibonachi: ");
    scanf("%d", &number);
    printf("%d\n%d\n", f1, f2);

    for (i = 0; i <= number; ++i ){
        f3 = f1 + f2;
        printf("%d\n", f3);
        f1 = f2;
        f2 = f3;
    }
    return 0;
}