#include<iostream>
using namespace std;

class area
{
 	public:
 		
 		int  r,h,b,l,w;
 		float a=3.14*r;
	 	virtual void calculator()= 0;
		
};

class circle :public area
{
	public:
		void setdata()
		{
			cout<<"enter you circle in r value = ";
			cin>>r;
		}
		void calculator()
		{
			cout<<endl<<"circle value of = "<<a;
		}
};
class triangle:public area 
{
    public:
	  	void setdata()
	  	{
		 	cout<<"enter you triang in hight value = ";
		 	cin>>h;
			cout<<"enter you triang in base value = ";
		 	cin>>b; 	
	  	}	
	  	void calculator()
	  	{
	  		cout<<endl<<"triang value = "<<(h*b)/2;
	  	}
};
class rectangle :public area 
{
	public:
		void setdata()
		{
			cout<<"enter you rectangle in Length value = ";
			cin>>l;	
			cout<<"enter you rectangle in Width value = ";
			cin>>w;
		}
		void calculator()
		{
			cout<<endl<<"rectangle value = "<<l*w;
		}	
};	

int main()
{
	
	circle b1;
	triangle v1;
	rectangle r1;
	cout<<"--------------circle daitel----------------"<<endl;
	b1.setdata();
	b1.calculator();
	cout<<endl<<endl<<"--------------triangle daitel----------------"<<endl;
	v1.setdata();
	v1.calculator();
	cout<<endl<<endl<<"--------------rectangle daitel----------------"<<endl;
	r1.setdata();
	r1.calculator();
	
	return 0;
}
