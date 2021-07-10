#include <stdio.h>

int main (){

    int a, b, c, lagest;

    printf("Input three integers:\n First one is: ");
    scanf ("%d", &a);
    printf("Second one is: ");
    scanf ("%d", &b);
    printf("Third one is: ");
    scanf ("%d", &a);

    if ( a > b && a > c){
        lagest = a;
    }
        else if (b > c && b > a) {
        lagest = b;
        }
            else
            {
                lagest = c;
            }
    printf("The lagest number is: %d", lagest);

}
