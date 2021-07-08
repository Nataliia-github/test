#include <stdio.h>

int main(){

	int i;
	double number, sum = 0.0;

	for (i = 1; i <=10; ++i){
		printf ("Enter a positive number N%d: ", i);
		scanf ("%lf", &number);
		
		if ( number < 0.0){
			continue;
		}	
		
		sum += number;
	}

	printf ("Sum = %lf\n", sum); 
	
	return 0;
}
