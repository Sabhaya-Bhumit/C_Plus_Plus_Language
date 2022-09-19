#include<iostream>
#include<string.h>
using namespace std;

class hotal
{
	public:
	static char location[100];
	
	private :
		int id;
		char name[100];
		char type[100];
		int rating ;
		int year;
		int staff_quantity;
		int room_quantity;
		
	public :
		 static void  hotalloc()
	     {
	     	strcpy(location,"surat");
		 }
		 void setdata()
		 {
		 	cout<<"enter id=";              cin>>this->id;
		 	cout<<"enter name=";            cin>>this->name;
		 	cout<<"enter hotal_type=";      cin>>this->type;
		 	cout<<"enter year=";            cin>>this->year;
		 	cout<<"enter staff_quantity=";  cin>>this->staff_quantity;
		 	cout<<"enter room_quantity=";   cin>>this->room_quantity;
		 }
		 void getdata()
		 {
		 	cout<<"id="<<this->id<<endl
		 	    <<"name= "<<this->name<<endl
		 	    <<"hotal_type="<<this->type<<endl
		 	    <<"year="<<this->year<<endl
		 	    <<"staff_quantity="<<this->staff_quantity<<endl
		 	    <<"room_quantity="<<this->room_quantity<<endl
		 	    <<"location= "<<this->location<<endl;
		 }		  
};
char hotal::location[100]="surat";

int main()
{
	int i,a;
	hotal b[100];
	cout<<"how many hotal= ";
	cin>>a;
	cout<<endl;
	for(i=0;i<a;i++)
	{
	     b[i].setdata();
	     cout<<endl;
	}
	for(i=0;i<a;i++)
	{
	     b[i].getdata();
	     	     cout<<endl;

	}
	return 0;	
}



