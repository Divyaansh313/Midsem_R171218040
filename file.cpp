#include <iostream>
using namespace std;
 
int main()
  {
   int a = 1;
   int c ;

   c = a++;
   // Value of a will not be increased before assignment.
   cout << "Firstly Value of a++ is :" << c << endl ;
   
   //After expression value of a is increased.
   cout << "Secondly Value of a is :" << a << endl ;
   
   //Value of a will be increased before assignment.
   c = ++a;
   cout << "Thirdly Value of ++a is  :" << c << endl ;
   return 0;
   }
