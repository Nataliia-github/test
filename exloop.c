#include <stdio.h>

int main(){

	int n, i = 0, a, sum = 0;
	float average;
	
	printf ("Input number of terms: ");
	scanf ("%d", &n);
	
	for (i = 1;i <= n; ++i){
		printf ("Input number N %d: ",i);
		scanf ("%d", &a); 
		sum += a;
	}
	average = sum/n;
	printf ("Average is: %.2f\n ", average);
	return 0;
}
