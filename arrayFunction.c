#include <stdio.h>
/*
void display (int age1, int age2){
    printf("%d\n", age1);
    printf("%d\n", age2);
}

int main(){
    int ageArray[] = {2, 8, 4 ,12};
    display(ageArray[1], ageArray[2]);
    return 0;
}

float calculateSum (float num[]);

int main(){
    float result, num [] = {23.4, 55.0, 22.6, 3, 40.5, 18};

    result = calculateSum(num);
    printf("result = %.2f", result);
    return 0;
}

float calculateSum(float num[]){
    float sum = 0.0;

    for (int i = 0; i < 6; ++i){
        sum += num[i];
    }
    return sum;
}

*/
////////////////////////////////////////////////////////////

// Pass two-dimensional arrays

void displayNumbers(int num[2][2]);

int main(){
    int num[2][2];
    printf("Enter 4 numbers: \n");
    for (int i =0; i < 2; ++i){
        for (int j =0; j < 2; ++j){
            scanf ("%d", &num[i][j]);
        }
    }
    displayNumbers(num);
    return 0;
}

void displayNumbers(int num1[2][2]){
printf("Displaying: \n");
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            printf ("%d\n",num1[i][j]);
        }
    }

}


