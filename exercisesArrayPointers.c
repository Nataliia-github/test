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
*/

///////////////////////////////////////////////////

// ex 3. Calculate Standard Deviation


