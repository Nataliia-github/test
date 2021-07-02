
#include <stdio.h>

int main (){

  float farh,celsium;
  int lower, upper, step;

  lower=0;
  step = 20;
  celsium = lower;
  upper = 300;

  printf ("\n\nСоответсвие температур в градусах C/F:\n");
  printf ("-------------------------------------\n");
  while (celsium <= upper){
        farh = ( celsium * 1.8) + 32 ;
        printf ("|%17.0f|%17.2f|\n",celsium, farh);
        celsium = celsium + step;
  }
  printf ("-------------------------------------\n\n");
}
