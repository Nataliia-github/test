#include <stdio.h>

int main(){

	int a, ch;

	printf ("Input integer for check: ");
	scanf ("%d", &a);
	
	ch = a % 2;
	
	if (ch == 0){
		printf ("The integer is even\n");
	}
	else 
		printf ("The integer is odd\n");
	return 0;
}
