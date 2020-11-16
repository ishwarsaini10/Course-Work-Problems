#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
   int max_n = 1;
   int min_n = 0;
   int new_n;
   int i;
   cout<<"The random number is: \n";
   for (i = 0; i < 10; i++) {
      new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
      //rand() returns random decimal number.
      cout<<new_n<<endl;
   }
   return 0;
}
