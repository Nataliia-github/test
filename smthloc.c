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
*/

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
    return 0;

}