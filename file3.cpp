#include<iostream>
using namespace std;
class table
{
 private:
 	int x,y,z;//taking three variables x,y and z
 	public:
 		void display()
 		{
 			for(x=0;x<=1;x++)
 			{
			 for(y=0;y<=1;y++)
 			{
			 for(z=0;z<=1;z++)
 			{
 				if((x*y+z)==2)
 				cout<<x<<"\t"<<y<<"\t"<<z<<"\t"<<"1"<<endl;
 				else
 				cout<<x<<"\t"<<y<<"\t"<<z<<"\t"<<x*y+z<<endl;
			 }
        }
    }
		}
};
int main()
	{
	table tt;
	tt.display();
	return 0;
        }
