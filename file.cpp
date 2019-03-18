#include <iostream>
using namespace std;
 
int main()
  {
   int a = 1;
   int c ;

   c = a++;
   cout << "Firstly Value of a++ is :" << c << endl ;

   cout << "Secondly Value of a is :" << a << endl ;

   c = ++a;
   cout << "Thirdly Value of ++a is  :" << c << endl ;
   return 0;
   }
