#include <stdio.h>

int main(){

    int n, i;
    unsigned long long facto = 1;

    printf("Input n:");
    scanf("%d", &n);
    
    for (i = 1; i <= n; ++i){
        facto = facto * i;
    }
    
    printf("Factorial of %d = %lli\n", n, facto);

    return 0;
}