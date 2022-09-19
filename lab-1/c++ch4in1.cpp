#include<iostream>
#include<string.h>
using namespace std;

class student
{
	private:
		int id;
		char name[100];
		int age;
		char course[100];
		char emali[100];
		char city[100];
		char college[100];
		
	public :
		void setdata()
		{
			cout<<"netr you student data"<<endl;
			cout<<"enter you id= " ;     cin>>this->id;
            cout<<"enter you name= " ;   cin>>this->name;
            cout<<"enter you age= ";     cin>>this->age;
            cout<<"enter you course= " ; cin>>this->course;
			cout<<"enter you emali= " ;  cin>>this->emali;
			cout<<"enter you city= " ;   cin>>this->city;
			cout<<"enter you college= "; cin>>this->college;
			cout<<endl;
		}
		void getdata()
		{
			cout <<"id= "     <<this->id<<endl
			     <<"name= "   <<this->name<<endl
			     <<"age= "    <<this->age<<endl
 			     <<"course= " <<this->course<<endl
			     <<"emali= "  <<this->emali<<endl
			     <<"city= "   <<this->city<<endl
			     <<"college= "<<this->college<<endl;
         }
};
int main()
{
	student b1,b2,b3,b4,b5;
	
	b1.setdata();
	b2.setdata();
	b3.setdata();
	b4.setdata();
	b5.setdata();
	
	
	b1.getdata();
	b2.getdata();
	b3.getdata();
	b4.getdata();
	b5.getdata();
	
	return 0;
}
