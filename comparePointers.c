#include <stdio.h>
#include <stdlib.h>
#define STCKSIZE 50

void push (int asValue);
int pop (void);
int *p1, *tos, stack[STCKSIZE];

int main(){

    int value;
    p1 = stack;
    tos = p1;
        do {
            printf("Enter a number (-1 to quit, 0 for pop): ");
            scanf("%d", &value);
            if (value != 0) push(value);
            else
            {
                printf("This is it %d\n", pop());
            } 
        }while(value != -1);
    
    return 0;
}

void push(int asValue){
    p1++;
    if (p1 == (tos+STCKSIZE)){
        printf("stack overflow\n");
        exit(1);
    }
    *p1 = asValue;
}

int pop(void){
    if (p1 == tos){
        printf("stack underflow\n");
        exit(1);
    }
    p1--;
    return* (p1 + 1);
}

