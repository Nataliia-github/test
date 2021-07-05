#include <stdio.h>


int main (){

	int massive[5];
	int i;

	printf ("Enter 5 integers: \n");
	
	for ( i = 0; i < 5; ++i){
		scanf ("%d", &massive[i]);	
	}
	printf ("Displaying integers: ");

	for ( i = 0; i < 5; ++i) {
		printf ("%d ,", massive[i]);
	} 
	return 0;

}
