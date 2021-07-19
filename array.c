#include <stdio.h>

int main () {

int values [5];
int i;
    
    for (i = 0; i < 5; ++i){
        scanf("%d", &values[i]);
    }

    printf("Display integers: \n");

    for (i = 0; i < 5; ++i)
    {
        printf("%d\n", values[i]);
    }
    return 0;
}
