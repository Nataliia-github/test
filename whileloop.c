#include <stdio.h>

int main(){

	float f, sum = 0;

	do {
		printf ("Enter a number: ");
		scanf ("%f", &f);
		sum += f;
	}
	while ( f != 10.0 );

	printf ("Sum = %.6f\n", sum);

//	while (sum >= 10 && sum <=100){
//		printf ("The result between 10 and 100");
//	} 		
	return 0;
}
