#include <stdio.h>
#define IN 1
#define OUT 0

int main (){

	int c, state;
	state = OUT;

	while (( c = getchar()) != EOF){
		if ( c != ' ' && c != '\t' && c !='\n'){
		state = IN;
		putchar ('_');
		}
		else if ( state == IN ){
			state = OUT;
			printf ("\n");
		}
	}
}
