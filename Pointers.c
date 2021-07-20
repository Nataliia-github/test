/*#include <stdio.h>
#include <stdlib.h>
int main()
{
  int cat, *dog;
  system("chcp 1251");
  system("cls");
  cat = 134;
  dog = &cat;
  // %x = вывод числа в шестнадцатеричной форме
  printf("\n Значение переменной cat равно %d", cat);
  printf("\n Адрес переменной cat равен %p шестн.", &cat);
  printf("\n Данные по адресу указателя dog равны %d", *dog);
  printf("\n Значение указателя dog равно %x шестн.", *dog);
  printf("\n Адрес расположения указателя dog равен %p шестн.", &dog);
  getchar();
  return 0;
}
////////////////////////////////////////////////////////////

#include <stdio.h>
int main()
{
  int var = 5;
  int *pc;
  pc = &var;
  printf("address of var: %p", &var); 
  printf("var: %d\n", var);
  printf("pc: %p\n", pc);
   
  var = 20;
  printf("address of var: %p\n", &var); 
  printf("var: %d\n", var);
  printf("pc: %p\n", pc);
  printf("pc: %d\n", *pc);
  
  
  return 0;
}


/////////////////////////////////////////////////////////

#include <stdio.h>

int main(){
  int arrayFour[4];
  int i;

  for (i = 0; i < 4; ++i){
    printf("Element %d = %d : %p\n", i, arrayFour[i], &arrayFour[i]);
  }

  printf("Adress of array: %p\n", arrayFour);
return 0;

}
/////////////////////////////////////////////////////////


#include <stdio.h>

int main(){
  int i, arraySix[6], sum = 0;
  printf ("Input 6 numbers: ");

  for (i = 0; i < 6; ++i){
  scanf("%d", arraySix + 1);
  sum += *(arraySix + 1);
  // printf("Sum = %d\n", sum);
  }
  printf("Sum = %d\n\n", sum);
  return 0;
}

/////////////////////////////////////////////////////
#include <stdio.h>

int main(){
  int ArrayFive[5] = {1, 2, 3, 4, 5};
  int* ptr;

  ptr = &ArrayFive[2];

  printf("Pointer 3: %d \n", *ptr);
  printf("Pointer 4: %d \n", *(ptr+1));
  printf("Pointer 2: %d \n", *(ptr-1));

  return 0;
  
}


//////////////////////////////////////////////////////////

// C Pass Addresses and Pointers
#include <stdio.h>

void swap( int *n1, int *n2);

int main(){

  int num1 = 5, num2 = 10;

  swap (&num1, &num2);

  printf("num1 = %d\n", num1);
  printf("num2 = %d\n", num2);

  return 0;
}

void swap(int* n1, int* n2){
  int temp;
  temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}
*/
///////////////////////////////////////////////////////////

//  Passing Pointers to Functions
#include <stdio.h>

void addOne(int* ptr){
  (*ptr)++; 
}

int main(){

  int* p, i = 10;
  p = &i;
  addOne(p);

  printf("%d", *p);
  return 0;
}