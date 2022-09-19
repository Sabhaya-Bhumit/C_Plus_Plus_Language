#include<iostream>
using namespace std;

int bhumit(int );

int main()
{
	int a,ans;
	cout<<"enter you number =";
	cin>>a;
	cout<<endl;

	bhumit(a);
}
inline int bhumit(int a)
{
	int i;
	int sum=1;
	for(i=a;i>=1;i--)
	{
		sum=sum*i;
	}
	cout<<sum;
}
