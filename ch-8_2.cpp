#include<iostream>
using namespace std;

int main()
{
	int a;
	
	cout<<"enter age = ";
	cin>>a;
	
	try
	{
		if(a<18)
		{
			throw 1;
		}
		else
		{
			cout<<"you can vote "<<endl;
		}
	}
	catch(int n)
	{
		cout<<endl<<"you not vote...";
	}
	catch(float n)
	{
		cout<<"you not vote....";
	}
	catch(...)
	{
		cout<<"you not vote.....";
	}
	return 0;
}
