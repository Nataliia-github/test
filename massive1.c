#include <stdio.h>
int main()
{
	int marks[15], i, n, sum = 0, average;

     printf("\nEnter number of elements: ");
     scanf("%d", &n);

     for(i=0; i<n; ++i)
     {
          printf("Enter number %d: ",i+1);
          scanf("%d", &marks[i]);
          
          // adding integers entered by the user to the sum variable
          sum += marks[i];
     }

     average = sum/n;
     printf("Average = %d\n\n", average);

     return 0;
}
