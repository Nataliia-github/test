#include <stdio.h>

int main()
{
	int a, b, c, result;

	printf ("Введите а: ");
	scanf ("%d", &a);
	printf ("Введите b: ");
	scanf ("%d", &b);
	printf ("Введите c: ");
	scanf ("%d", &c);

	result = (a == b) && (c > b);
	printf ("(a == b) && (c > b) result is %d\n", result);

	result = (a == b) && (c < b);
	printf ("(a == b) && (c < b) result is %d\n", result);

	result = (a == b) || (c > b);
	printf ("(a == b) || (c > b) result is %d\n", result);

	result = (a == b) || (c < b);
	printf ("(a == b) || (c < b) result is %d\n", result);

	result = !(a != b);
	printf ("!(a != b) result is %d\n", result);

	result = !(a == b);
 	printf ("!(a == b) is %d\n", result);

	return 0; 

}
