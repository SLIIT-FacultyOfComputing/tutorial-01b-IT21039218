/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
#include <math.h>

int main() {

   float no1, no2;
   double minimum,maximum,multiply;

   printf("Enter a value for no 1 : ");
   scanf("%2f", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%2f", &no2);

   printf("%1f", minimum(no1, no2));
   printf("%1f", maximum(no1, no2));
   printf("%1f", multiply(no1, no2));

   return 0;
}
