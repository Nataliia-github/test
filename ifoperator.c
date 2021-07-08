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

	if ( temp == 1 ){
		printf ("It's TRUE\n");
	}
	else
		printf ("It's FALSE\n");	
	return 0;
}
