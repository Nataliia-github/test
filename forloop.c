#include <stdio.h>

int main(){

	int i, count = 0;
	
	for (i = -20; i <= 20; i = (i + 2)){
		printf (" %d", i);
		count += i;	
	}
	printf ("\n");
	printf ("Sum is = %d\n", count);
	return 0;
}
