#include <stdio.h>
#define IN 1
#define OUT 0

int main(){

	int c, nw, state;
	nw = 0;
	state = OUT;

	while ((c= getchar()) !=EOF){	
		if (c == ' ' || c == '\n'){
		state = OUT;
		}
		else if ( state == OUT){
			state = IN;
			++nw;
			}
	printf ("Количество слов:%d\n", nw);
	}
}
