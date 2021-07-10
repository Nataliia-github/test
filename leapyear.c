#include <stdio.h>

int main (){

    int year;
    
    printf("\nInput a year for check:");
    scanf("%4d", &year);

    if (year % 400 == 0 || year % 4 == 0){
        printf("This year is leap.\n\n");
    }
//    if (year % 4 == 0){
//        printf("This year is leap.\n");
//   }
    else {
    printf("This year is NOT leap.\n\n");
    }

return 0;
}