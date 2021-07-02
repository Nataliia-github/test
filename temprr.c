#include <stdio.h>

int main (){
  
	int farh;
	farh = 300;

	for (farh =300; farh >= 0; farh = farh - 20){
	printf ("%10d%10.1f\n",farh, (5.0/9.0)*(farh-32));
	}
}
