#include <stdio.h>

int main(){

    int n1, n2, max;

    printf("\nInput n1: ");
    scanf("%d", &n1);
    printf("Input n2: ");
    scanf("%d", &n2);
        
    if (n1 > n2){
        max = n1;
    }
    else
    {
        max = n2;
    }
    
    while (1){
        if ( max % n1 == 0 && max % n2 == 0){
            printf("The LCM of %d and %d is %d.\n\n", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}