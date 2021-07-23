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

#include <math.h>
#include <stdio.h>

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

#include <math.h>
#include <stdio.h>

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

///////////////////////////////////////////////////////////////

// ex 5. Multiply Two Matrices Using Multi-dimensional Arrays

#include <stdio.h>

int main(){

    int i, j, row, colum;

    printf("Enter numbers of row: ");
    scanf("%d", &row);
    printf("Enter number of colums: ");
    scanf("%d", &colum);

    int arrayA[row][colum], arrayB[row][colum], arrayMul[row][colum];

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
            arrayMul[i][j] = arrayA[i][j] * arrayB[i][j];
            printf("Element %d %d matrix Multi: %d\n", i, j, arrayMul[i][j]);
        }
    }

    return 0;
}


/////////////////////////////////////////////////////////

// ex 5. way 2. Multiply Two Matrices Using Multi-dimensional Arrays
#include <stdio.h>

// Function to get the elements of array

void getElements(int get[][10], int row, int column) {

  printf("\n\nFill elements of matrix: \n");
 
  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < column; ++j) {
        printf("Enter a %d%d: ", i + 1, j + 1);
        scanf("%d", &get[i][j]);
    }
  }
}

void multi(int arrayFA[][10], int arrayFB[][10], int result[][10], int row1, int col1, int row2, int col2) {

  // making array with arrayA rows = arrayB columns
  for (int i = 0; i < row1; ++i) {
    for (int j = 0; j < col2; ++j) {
      result[i][j] = 0;
      // printf("%d",result[i][j]);
    }
  }

  // multiply arrays
  for (int i = 0; i < row1; ++i) {
    for (int j = 0; j < col2; ++j) {
      // result[i][j] = 0;
      for (int k = 0; k < col1; ++k) {
        result[i][j] += arrayFA[i][k] * arrayFB[k][j];
      }
    }
  }
}

// function to print the result

void display(int result[][10], int row, int column) {
  printf("\n Result is: \n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; ++j) {
      printf("%d ", result[i][j]);
      if (j == column - 1) printf("\n");
    }
  }
}

int main() {

  int arrayA[10][10], arrayB[10][10], result[10][10], rowA, colA, rowB, colB;

  printf("Print numbers of rows and columns of array A: \n");
  scanf("%d %d", &rowA, &colA);

  printf("Print numbers of rows and columns of array B: \n");
  scanf("%d %d", &rowB, &colB);

  while (colA != rowB) {
    printf("Error! Number of column array A must be equal number of rows of array B.");
    printf("Print numbers of rows of array A: ");
    scanf("%d %d", &rowA, &colA);
    printf("Print numbers of rows of array B: ");
    scanf("%d %d", &rowB, &colB);
  }

  // Get elements of first array A
  getElements(arrayA, rowA, colA);

  // Get elements of second array B
  getElements(arrayB, rowB, colB);

  // multiply arrays
  multi(arrayA, arrayB, result, rowA, colA, rowB, colB);

  // display the result
  display(result, rowA, colB);

  return 0;
}

////////////////////////////////////////////////////////////

#include <stdio.h>

// 1. Get numbers of row and columns of the arrays / 
// 2. Get elements of A and B array / function getElements
// 3. Create result array / function createArrayRes
// 4. Count multuply of two arrays / function multiplyArrays
// 5. Output the result / printResult

void getElements(int array[][10], int row, int column){
    for (int i = 0; i < row; ++i){
        for (int j = 0; j < column; ++j){
            printf("Enter element %d%d: ", i, j);
            scanf("%d", &array[i][j]);
            // printf("echo %d\n", array[i][j]);
        }
    }
}


void multiplyArrays (int arrayAF[][10], int arrayBF[][10], int arrayResF[][10], int rowAF, int colAF, int rowBF, int colBF){

    for (int i = 0; i < rowAF; ++i){
        for (int j = 0; j < colBF; j++) {
            arrayResF[i][j] = 0;  
        }
    }

    for (int i = 0; i < rowAF; ++i){
        for (int j = 0; j < colBF; ++j){
            for (int k = 0; k < colAF; ++k){
                // printf("arrayResF[i][j] %d += arrayAF[i][k] %d * arrayBF[k][j] %d ;\n", arrayResF[i][j], arrayAF[i][k], arrayBF[k][j]);
                arrayResF[i][j] += arrayAF[i][k] * arrayBF[k][j];
                // printf("%d\n", arrayResF[i][j]);
            }
        }
    }
}

void printResult(int arrayRes[][10], int colAF, int rowBF){
    for (int i = 0; i < rowBF; ++i){
        for (int j = 0; j < colAF; ++j){
            printf("%d ", arrayRes[i][j]);
            if (j == colAF - 1) printf("\n");
        }
    }
}

int main(){

    int arrayA[10][10], arrayB [10][10], arrayRes[10][10];
    int rowA, colA, rowB, colB;

    printf("Enter row and column of array A: \n");
    scanf("%d %d", &rowA, &colA);
    // int arrayA [rowA][colA];

    printf("Enter row and column of array B: \n");
    scanf("%d %d", &rowB, &colB);
    // int arrayB [rowB][colB];

    getElements(arrayA, rowA, colA);
    getElements(arrayB, rowB, colB);  

        // for (int i = 0; i < rowA; ++i){
        //     for (int j = 0; j < colA; ++j){
        //         printf("\n Array A %d ", arrayA[i][j]);
        //         if (j == colA - 1) printf("\n");
        //     }
        // } 
        //         for (int i = 0; i < rowB; ++i){
        //     for (int j = 0; j < colB; ++j){
        //         printf("\n Array B %d ", arrayB[i][j]);
        //         if (j == colB - 1) printf("\n");
        //     }
        // } 

    // int arrayRes[rowB][colA];
    // createArrayRes(arrayRes, rowB, colA);

    multiplyArrays(arrayA, arrayB, arrayRes, rowA, colA, rowB, colB);

    
    printf("\nResult is : \n"); 
    printResult(arrayRes, colA, rowB);

    return 0;
}


/////////////////////////////////////////////////////////
// ex 6. Find Transpose of a Matrix

// 1. Create and fill first matrix A / function enterElements
// 2. Print matrix A / function printArray
// 3. Create matrix AT - Transpose A / function transposeArray
// 4. Fill matrix AT / function transposeArray
// 5. Print the result / function printArray

#include <stdio.h>

void enterElements (int arrayAF[10][10],int rowAF,int colAF){
    for (int i = 0; i < rowAF; ++i){
        for (int j = 0; j < colAF; ++j){
            printf("Enter element %d%d: ", i, j);
            scanf("%d", &arrayAF[i][j]);
        }
    }
}

void printArray (int arrayF[10][10], int rowF, int colF){
    printf("Array :\n");
    for (int i = 0; i < rowF; ++i){
        for (int j = 0; j < colF; ++j){
            printf("%d ", arrayF[i][j]);
            if (j == colF - 1) printf("\n");
         }
    }
}

void transposeArray (int arrayAF[10][10], int rowAF, int colAF, int arrayATF[10][10]){
    for (int i = 0; i < rowAF; ++i){
        for (int j = 0; j < colAF; ++j){
            arrayATF[j][i] = arrayAF [i][j];
        }
    }
}

int main(){

    int rowA, colA;
    int arrayAT[10][10];
    int arrayA [10][10];

    printf("Enter number of rows and colunms of A array(max 10): \n");
    scanf("%d %d", &rowA, &colA);
    // int arrayA [rowA][colA];

    enterElements(arrayA, rowA, colA);

    printArray(arrayA, rowA, colA);

    // int arrayAT[][10];
    transposeArray(arrayA, rowA, colA, arrayAT);

    printArray(arrayAT, colA, rowA);
    printf("The end.\n\n");
    
    return 0;
}


//////////////////////////////////////////////////////////////////
// ex 7. Multiply two Matrices by Passing Matrix to a Function

// 1. Enter number of rows and columns 
// 2. Enter elements of matrix / function enterElements
// 3. Print matrixs / printArray 
// 4. Multiply arrays / multiplyArrays
// 5. Print the result / printArray

#include <stdio.h>
#include <math.h>

void enterElements (int arrayF[][10],int rowF,int colF){
    for (int i = 0; i < rowF; ++i){
        for (int j = 0; j < colF; ++j){
            scanf("%d", &arrayF[i][j]);
        }
    }
} 

void printArray (int arrayF[][10], int rowF, int colF){
    for (int i = 0; i < rowF; ++i){
        for (int j = 0; j < colF; ++j){
            printf("%d ", arrayF[i][j]);
            if (j == colF - 1) printf("\n");
        }
    }    
}

void multiplyArrays (int arrayAF[][10], int rowAF, int colAF,int arrayBF[][10], int rowBF, int colBF, int resArrayF[][10]){
    for (int i = 0; i < rowAF; ++i){
        for (int j = 0; j < colBF; ++j){
            resArrayF[i][j] = 0;
            for (int k = 0; k < colAF; ++k){
                resArrayF[i][j] += arrayAF[i][k] * arrayBF[k][j];
            }
        }
    }
}

int main (){

    int rowA, colA, rowB, colB;
    int arrayA[10][10];
    int arrayB[10][10];
    int resMultiplyArrays [10][10];

    printf("Enter number of rows ang columns A array (max 10): \n");
    scanf("%d %d", &rowA, &colA);
    printf("\n");

    printf("Enter number of rows ang columns B array (max 10): \n");
    scanf("%d %d", &rowB, &colB);
    printf("\n");

    while (colA != rowB) {
        printf("Error! Can't multiply this arrays. Enter colA = rowB.");
        printf("Enter number of rows and columns A array (max 10): \n");
        scanf("%d %d", &rowA, &colA);
        printf("\n");

        printf("Enter number of rows and columns B array (max 10): \n");
        scanf("%d %d", &rowB, &colB);
        printf("\n");
    }

    printf("Enter elements of A array: \n");
    enterElements(arrayA, rowA, colA);
    printf("\n");

    printf("Enter elements of B array: \n");
    enterElements(arrayB, rowB, colB);
    printf("\n");
    
    printf("The A array: \n");
    printArray(arrayA, rowA, colA);
    printf("\n");

    printf("The B array: \n");
    printArray(arrayB, rowB, colB);
    printf("\n");

    multiplyArrays (arrayA, rowA, colA, arrayB, rowB, colB, resMultiplyArrays);

    printf("The result array: \n");
    printArray(resMultiplyArrays, rowA, colB);
    printf("\n");

    return 0;
}
*/
///////////////////////////////////////////////////////////

// ex 8. Access Array Elements Using Pointer

// 1. Enter array[5];
// 2. Enter elements of array
// 3. Print with pointers

#include <stdio.h>

int main(){

    int array[5];

    printf("Enter elements of array: \n");
    for (int i = 0; i < 5; ++i){
        printf("Enter element %d: \n", i + 1);
        scanf("%d", array + i);
    }

    printf("The origin array is: \n");
    for (int i = 0; i < 5; ++i){
        printf("Element %d = %d \n", i + 1, *(array + i));
    }    

    return 0;
}

