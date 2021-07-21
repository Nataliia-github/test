/* #include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, *ptr;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));
    //  printf("PTR = %d\n", *ptr); 

    if (ptr == NULL){
        printf("Error! Memory not allocated.");
        exit (0);
    }

    printf("Enter elements: \n");
    for (i = 0; i < n; ++i){
        scanf("%d", ptr + i);  
        sum += *(ptr + i);
        // printf("PTR = %d\n", *(ptr + i));    
        // printf("Sum = %d\n", sum);    
    }

    printf("Sum = %d\n\n", sum);

    free(ptr);
    return 0;
}


///////////////////////////////////////////////////////////
// Example 2: calloc() and free()

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i, *ptr, sum = 0;
    printf("\n\nEnter numbers of elements: \n");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    if (ptr == NULL){
        printf("Error! Memory not allocated.");
        exit (0);
    }

    printf("Enter elements %d: \n", n);
    for (i = 0; i < n; i++){
        scanf("%d", ptr + i);
        sum += *(ptr + i);   
    }
    printf("Sum = %d\n\n", sum);
    free(ptr);
    return 0;

}

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr, i, n1, n2;
    printf("Enter size: \n");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));

    printf("Adresses of previously allocated memory: \n");
    for (i = 0; i < n1; ++i){
        printf("%pc\n", ptr + i);
    }

    printf("Reenter the new size: ");
    scanf("%d", &n2);

    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Adresses of newly allocated memore: \n");
    for (i = 0; i < n2; ++i){
        printf("%pc\n", ptr + i);
    }
    
    free(ptr);

    return 0;
}

