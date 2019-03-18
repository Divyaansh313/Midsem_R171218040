#include <iostream>
using namespace std;

class Fact
{
	public:
		int n;
		public:
		Fact(int num)
		{
			int fct;
			fct=factorial(num);
			cout<<"Factorial is: "<<fct<<endl;
				
		}
		int factorial(int n)//using if else
		{
			if(n>1)
				return (n * factorial(n-1));
			else
				return 1;
		}
		~Fact()
		{
			cout<<"Bye bye"<<endl;//using destructor
		}
};
int main()
{
		int num;
		cout<<"enter value:"<<endl;
		cin>>num;
		Fact f1 = Fact(num);
		return 0;
}
