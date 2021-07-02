#include <stdio.h>

int main (){

  float farh,celsium;
  int lower, upper, step;

  lower=0;
  step = 20;
  farh = lower;
  upper = 300;

  while (farh <= upper){
	celsium = ( 5.0 / 9.0 ) * ( farh - 32 );
	printf ("Соответсвие температур в градусах F/C:\n");
	printf ("_____________________________________\n");
	printf ("|%17.0f|%17.2f|\n",farh,celsium);
	printf ("_____________________________________\n");
	farh = farh + step;
  }
}
