#include<iostream>
using namespace std;

class x
{
	public :
	   float a;
	   bhumit()
	   {
	   		cout<<"enter a= ";  cin>>a; 
	   }
	   
};

class y :public x
{
	public:
		float b;
	    harshit()
	    {
	    	b=(b*1.8)+33;
			cout<<"celsius to fahrenheit = "<<b<<endl;	
		} 
};

class z :public y
{
	public:
		float c;
		 	
		  
		  getdata()
		  {
		  	 c=(b+273.15);
		  	cout<<"Kelvin = "<<c;
		  }
};

int main()
{
;
    z z1;
    
    z1.bhumit();
    z1.harshit();
    z1.getdata();
	
	return 0;
}
