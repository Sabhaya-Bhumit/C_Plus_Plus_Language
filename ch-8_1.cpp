#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"enter value of a= ";
	cin>>a;
	
	cout<<"enter value of b= ";
	cin>>b;
	

	
	try
	{
		if(b==0)
		{
			throw 1;
		}
		else
		{
			c=a/b;
			cout<<"c= "<<c;
		}
	}
	catch(int n)
	{
		cout<<"error...";
	}
	catch(float n)
	{
		cout<<"no value ...";
	}
	catch(...)
	{
		cout<<"sorry...";
	}
	return 0;
}
