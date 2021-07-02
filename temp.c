#include <stdio.h>

int main (){

  float farh,celsium;
  int lower, upper, step;

  lower=0;
  step = 20;
  farh = lower;
  upper = 300;

  printf ("\n\nСоответсвие температур в градусах F/C:\n");
  printf ("-------------------------------------\n");
  while (farh <= upper){
	celsium = ( 5.0 / 9.0 ) * ( farh - 32 );
	printf ("|%17.0f|%17.2f|\n",farh,celsium);
	farh = farh + step;
  }
  printf ("-------------------------------------\n\n");
}
