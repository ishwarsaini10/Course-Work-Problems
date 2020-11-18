#include <iostream>
#include <stdlib.h>
int main() {
   double max_n = 1;
   double min_n = 0.1;
   double new_n;
   int i;
   std::cout<<"The random number is: \n";
   for (i = 0; i < 10; i++) {
      new_n =(((double)rand() % (max_n + 1 - min_n)) + min_n);
      //rand() returns random decimal number.
      std::cout <<  new_n << "\t" <<  rand()  << std::endl;
   }
   return 0;
}
