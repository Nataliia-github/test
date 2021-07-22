/*#include <stdio.h>

int main(){

    int i, n, sum = 0, average = 0;

    printf("Enter leight of array: ");
    scanf("%d", &n); 
    int arrayA[n];

    printf("Enter %d element: \n", n);
    for(i = 0; i < n; ++i){
        scanf("%d", &arrayA[i]);
        sum += arrayA[i];
    }

    average = sum / n;
    printf("The average is: %d\n\n", average);
    
    return 0;
}

/////////////////////////////////////////////
// Ex 1 way 2

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, n, *ptr, sum = 0, average = 0;
    printf("Enter leight of array: ");
    scanf("%d", &n); 
    int arrayA[n];
    ptr = arrayA;

    ptr = (int*) malloc(n * sizeof(int));

    printf("Enter %d element: \n", n);
    for(i = 0; i < n; ++i){
        scanf("%d", ptr + i);
        sum += *(ptr +i);
    }

    average = sum / n;
    printf("The average is: %d\n\n", average);
    
    return 0;
}

/////////////////////////////////////////////////////////

// Ex 2. C Program to Find Largest Element in an Array

#include <stdio.h>

int main(){

    int i, n, lagest;

    printf("\n\nEnter a number of elements: ");
    scanf("%d", &n);
    int arrayA[n];
    
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; ++i){
        scanf("%d", &arrayA[i]);
    }

    lagest = arrayA[0];
    for (i = 0; i < n; ++i){
        if (arrayA[i] > lagest){
            lagest = arrayA[i];
        }
    }

    printf("The lagest element of array is: %d\n\n", lagest);
    return 0;
}


///////////////////////////////////////////////////

// ex 3. Calculate Standard Deviation

#include <stdio.h>
#include <math.h>

int main(){
    
    int i;
    double stDeviation = 0, arrayA[10], sum = 0, ave = 0, deviation[10], sqrt();

    printf("Input 10 numbers: \n");
    for(i = 0; i < 10; ++i){
        scanf("%lf", &arrayA[i]);
        sum += arrayA[i];
    }

    // Find average
    ave = sum / 10;
    printf("Average = %f\n", ave);
    
    // Make array of deviations
    i = 0;
    while (i < 10){
        deviation[i] = (ave - arrayA[i]);
        deviation[i] *= deviation[i]; // square num
        stDeviation += deviation[i]; // sum square
        ++i;
    }
    // Find Standart Deviations
    stDeviation = stDeviation / 9;
    printf("Standart deviation is: %.3lf\n\n", sqrt(stDeviation));
    
    return 0;
}

////////////////////////////////////////////////////

// ex 3. way 2. Calculate Standard Deviation

#include <stdio.h>
#include <math.h>

float stDeviation(float arrayA[]);

int main(){

    int i; 
    float arrayA[10];

    printf("Input 10 numbers: \n");
    for(i = 0; i < 10; ++i){
        scanf("%f", &arrayA[i]);
    }

    printf("\nStandart deviation is: %f\n", stDeviation(arrayA));

    return 0;   
}

float stDeviation (float arrayF[]){
    float sum = 0.0, ave, deviation = 0.0;
    int i;
    for (i = 0; i < 10; ++i){
        sum += arrayF[i];
    }
    ave = sum / 10;
    for (i = 0; i < 10; ++i){
        deviation += pow(arrayF[i] - ave, 2);
    }
    return sqrt(deviation/9);
}
*/
///////////////////////////////////////////////////

// ex 4. Two Matrices Using Multi-dimensional Arrays
#include <stdio.h>

int main(){

    int i, j, row, colum;

    printf("Enter numbers of row: ");
    scanf("%d", &row);
    printf("Enter number of colums: ");
    scanf("%d", &colum);

    int arrayA[row][colum], arrayB[row][colum], arraySum[row][colum];

    printf("\n\nFill first matrix: \n");
    for (i = 0; i < row; ++i){
        for (j = 0; j < colum; ++j){
            printf("Enter %d %d matrix A: ", i, j);
            scanf("%d", &arrayA[i][j]);
        }
    }

    printf("\nFill second matrix: \n");
    for (i = 0; i < row; ++i){
        for (j = 0; j < colum; ++j){
            printf("Enter %d %d matrix B: ", i, j);
            scanf("%d", &arrayB[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < row; ++i){
        for (j = 0; j < colum; ++j){
            arraySum[i][j] = arrayA[i][j] + arrayB[i][j];
            printf("Element %d %d matrix Sum: %d\n", i, j, arraySum[i][j]);
        }
    }

    return 0;
}
