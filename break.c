#include <stdio.h>

int main(){

	int i;
	double number, sum = 0.0;

	for (i = 1; i <= 10; ++i){
		printf ("Enter positive number n%d: ", i);
		scanf ("%lf", &number);
		
		if (number < 0.0){
			break;
		}
		sum += number;
	}
	printf ("Sum = %.2lf\n", sum);
	
	return 0;
}
