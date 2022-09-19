#include<iostream>
#include<string.h>
using namespace std;

class cust
{
	private:
		int id;
		char name[100];
		int age;
		char telecome_brand_name[100];
		int mobile_number;
		char city[100];
		int  simcard_validity;
		
	public :
		void setdata()
		{
			cout<<"neter you customer data"<<endl;
			cout<<"enter you id= " ;                   cin>>this->id;
            cout<<"enter you name= " ;                 cin>>this->name;
            cout<<"enter you age= ";                   cin>>this->age;
            cout<<"enter you telecome brand name= " ;  cin>>this->telecome_brand_name;
			cout<<"enter you mobile number= " ;        cin>>this->mobile_number;
			cout<<"enter you city= " ;                 cin>>this->city;
			cout<<"enter you simcard validity= ";      cin>>this->simcard_validity;
			cout<<endl;
		}
		void getdata()
		{
			cout <<"id= "                   <<this->id<<endl
			     <<"name= "                 <<this->name<<endl
			     <<"age= "                  <<this->age<<endl
			     <<"telecome brand name= "  <<this->telecome_brand_name<<endl
 			     <<"mobile number= "        <<this->mobile_number<<endl
			     <<"city= "                 <<this->city<<endl
			     <<"simcard validity= "     <<this->simcard_validity<<endl;
			cout<<endl;    
        }
};
int main()
{
	cust b1,b2,b3,b4,b5;
	
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
