/*#include <stdio.h>

const int CITY = 2;
const int WEEK = 7;

int main() {
    int temperature[CITY][WEEK];

    for (int i = 0; i < CITY; ++i){
        for (int j = 0; j < WEEK; ++j){
            printf("City %d, day %d: ",i + 1, j + 1);
            scanf ("%d", &temperature[i][j]);
        }
    }

    printf("Display values: \n");
 
    for (int i = 0; i < CITY; ++i){
        for (int j = 0; j < WEEK; ++j){
            printf("City %d, day %d =  %d\n",i + 1, j + 1, temperature[i][j]);
        }
    }
    return 0;

}
*/
///////////////////////////////////////////////////////////

#include <stdio.h>

int main(){

    float a[2][2], b[2][2], result[2][2];

    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            printf("Input element of a number %d %d:", i, j);
            scanf ("%f", &a[i][j]);
            printf("Input element of b number %d %d:", i, j);
            scanf ("%f", &b[i][j]);
        }
    }

    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            result[i][j] = a[i][j] + b[i][j];
            printf("The element %d %d = %.2f\n", i, j, result [i][j]);
        }
    }
    return 0;
}