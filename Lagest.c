#include <stdio.h>

int main (){

    int a, b, c, lagest;

    printf("Input three integers:\nN 1 = ");
    scanf ("%d", &a);
    printf("N 2 = ");
    scanf ("%d", &b);
    printf("N 3 = ");
    scanf ("%d", &c);

    if (a > b && a > c){
        lagest = a;
    }
    if (b > a && b > c){
        lagest = b;
    }
    if (c > a && c > b){
        lagest = c;
    }
    if (lagest == 0){
        printf("They are some equal integers.\n");
    }
    else 
        printf ("The lagest number is: %d\n", lagest);
    return 0;
}
