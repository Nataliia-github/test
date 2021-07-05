#include <stdio.h>

int main(){

	int c, i, frequency;
	frequency = 0;
	int symbols[128];

	for (i = 0; i <= 127; ++i)
	symbols [i] = 0;
	
	while (( c = getchar()) != EOF ){
		if ( c <= 127 ){
			++symbols [i];
		}
		else if ( symbols[i] > 0){
			printf ("\"");
			putchar (i);
			printf ("\"");
		} 
		for (frequency = 0; frequency <= symbols [i]; ++frequency)
			printf ("_");
//		printf ("\n"); 
	}
}
