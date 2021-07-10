#include <stdio.h>

int main (){

    int i, no_vow = 1;
    char letter;
    char vow[] = {'a','e','u','o','i','A','E','U','O','I'};

    printf("Input letter for check:");
    scanf ("%c", &letter);

    for (i = 0; i <= sizeof(vow); ++i){
        if (letter == vow[i]){
            no_vow = 0;
        }
    }
    
    if (no_vow == 1) {
        printf("The letter is consonant.\n");
    }
    else {
        printf("The letter is vowel.\n");
    }

    return 0;
}