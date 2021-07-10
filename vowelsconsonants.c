#include <stdio.h>

int main(){	
	char letter;
	char vowels[] = {'a','e','i','o','u'};
	int i, is_consonant = 1;

	printf ("Input letter for check: ");
	scanf ("%c", &letter);


	for (i = 0;i < sizeof(vowels); ++i){
		if (letter == vowels[i]){
			is_consonant = 0;
		}
	}

	if (is_consonant == 1) {
		printf ("The letter is consonant.\n");
	} else {
		printf ("The letter is vowels.\n");
	}	 
	return 0;
}
