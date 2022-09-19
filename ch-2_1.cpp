#include<iostream>
using namespace std;


 add(int a,int b)
{
	cout<<a<<"+"<<b<<"="<<a+b<<endl;
}
sum(int a,int b)
{
	cout<<a<<"-"<<b<<"="<<a-b<<endl;
}
mul(int a,int b)
{
	cout<<a<<"*"<<b<<"="<<a*b<<endl;
}
div(int a,int b)
{
	cout<<a<<"/"<<b<<"="<<a/b<<endl;
}
per(int a,int b)
{
	cout<<a<<"%"<<b<<"="<<a%b<<endl;
}
int main()
{
    char n;
    int a,b;
	cout<<"enter you +, -, *, /and % =";
	cin>>n;
	cout<<endl;
	cout<<"enetr you a=";
	cin>>a;
    cout<<"enetr you b=";
	cin>>b;
	cout<<endl;
	
	switch(n)
	{
		case '+':
			{
				add(a,b);
				break;
	     	}
	    case '-':
		{
			sum(a,b);
			break;
    	 } 
	    case'*':
		{
			mul(a,b);
			break;
		}
		case'/':
		{
			div(a,b);
			break;
		}
		case'%':
		{
			per(a,b);
			break;
			}	
    } 
    return 0;
}


