#include <stdio.h>

int main (){
	int a, b, c, temp;

	printf ("Input a: ");
	scanf ("%d", &a);
	
	printf ("Input b: ");
	scanf ("%d", &b);

	printf ("Input c: ");
	scanf ("%d", &c);
	
	temp = (a == b) && ( b > c);

	if ( a >= b ){
		if (a == b){
			printf ("%d = %d\n", a, b);
		}
		else
			printf ("%d > %d\n", a, b); 
	}
	else
		printf ("%d < %d\n", a, b);	
	return 0;
}
