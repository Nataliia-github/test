#include <stdio.h>

int main () {

int values [5];
int i;
int sum = 0, avarege = 0;

    
    for (i = 0; i < 5; ++i){
        scanf("%d", &values[i]);
        sum = sum + values[i];
    }

    avarege = sum / i;
    printf("Display integers: \n");
  
    for (i = 0; i < 5; ++i)
    {
        printf("%d\n", values[i]);
    }

    printf("Display avarege: %d\n", avarege);

    return 0;
}

