#include<iostream>
using namespace std;

class x
{
	public :
	   int a;
	   int b;
	   int c;
};

class y :public x
{
	public:
		setdata()
		{
	    	cout<<"enter value of a= ";  cin>>a;
	    	cout<<"enter value of b= ";  cin>>b;
	    	cout<<"enter value of c= ";  cin>>c;	
		}
		getdata()
		{
			cout<<"\n\na= "<<(a*a*a)<<endl
		    	<<"b= "<<(b*b*b)<<endl
		    	<<"c= "<<(c*c*c)<<endl;
		}	
};

int main()
{
	y b1;
	b1.setdata();
	b1.getdata();
	
	return 0;
}
