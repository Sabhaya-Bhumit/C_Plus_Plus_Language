#include<iostream>
using namespace std;

class harshit 
{
	public :
		void getdata()
		{
			cout<<"hello"<<endl;
		}
};
class bhumit :public harshit
{
	public:
		 getdata(int a,int b)
		{
	  	  cout<<a<<"/"<<b<<"\ndivision= "<<a/b<<endl<<endl;	
		}
		
		 getdata(int a,int b,int c)
		{
		   cout<<a<<"-"<<b<<"-"<<c<<"\nsubtraction= "<<a-b-c<<endl<<endl;	
		}
		
		 getdata(int a,int b,int c, int d)
		{
			cout<<a<<"*"<<b<<"*"<<c<<"*"<<d<<"\nmultiplication= "<<a*b*c*d<<endl<<endl;
		}
		
		 getdata(int a,int b,int c,int d,int e)
		{
			cout<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"+"<<e<<"\naddition= "<<a+b+c+d+e<<endl<<endl;
		}
};

int main()
{
      bhumit b1;
	  b1.getdata(5,5);
	  b1.getdata(5,5,5);
	  b1.getdata(5,5,5,5);
	  b1.getdata(5,5,5,5,5);

	  return 0;	
}
