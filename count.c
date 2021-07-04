#include <stdio.h>

int main(){

	int c, ns;
	ns=0;
	
	while((c = getchar()) != EOF){
		if ( c == '\n' || c == '\t' || c == '\\' )
		++ns;
		printf ("Количество симолов строк, табуляций, пробелов:%d\n",ns); 
	}
}
