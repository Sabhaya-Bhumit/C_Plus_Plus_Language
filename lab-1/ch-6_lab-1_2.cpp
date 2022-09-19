#include<iostream>
using namespace std;

class cricket 
{
	public :
		void getdata()
		{
		  cout<<"criket";
		}
};

class T20Match:public cricket
{
	public :
		void getdata()
		{
		  cricket::getdata();
			cout<<"\ntotal over is 20 of t20 match\n\n";
		}
};

class TestMatch: public cricket
{
	public :
		void getdata()
		{
			cricket::getdata();
			cout<<"\ntotal over is 50 of testmatch ";
		}
};

int main()
{
	T20Match t1;
	TestMatch h1;
	
	t1.getdata();
	h1.getdata();
	
	return 0;
	
	
}
