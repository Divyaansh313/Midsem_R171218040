#include<iostream>
using namespace std;
class convert
{
	private:
	int num,temp[20],i,j;
	public:
		void binary()
		{
			cout<<"Enter the decimal number"<<endl;
			cin>>num;
			for(i=0;num>0;i++)
			{
				temp[i]=num%2;
				num=num/2;
		
		    }
		    j=i-1;
		    i=0;
		    while(j>=0)
		    {
		    	cout<<temp[j]<<"  ";
		    	i++;j--;
			}
			
		}
};
int main()
	int main()
{
	convert deci;
	deci.binary();

	return 0;
}
