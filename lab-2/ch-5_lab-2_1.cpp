#include<iostream>
using namespace std;
class a
{
	public:
		int x;
		a(){
		cout<<"Enter a : ";
		cin>>x;
	}
};
class b:public a
{
	public:
		int y;
		b(){
		cout<<"Enter b : ";
		cin>>y;
	}
};
class c:public a
{
	public:
		int z;
		c(){
		cout<<"Enter c : ";
		cin>>z;
	}
};
class d:public b,public c
{
	public:
		d(){
			cout<<"Sum is : "<<c::x+y+z+b::x;
		}
};
int main()
{
	d a;
}
	
