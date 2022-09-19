#include<iostream>
#include<string.h>
using namespace std;
class cafe
{
    private :
    	
    	   int id;
           char name[100];
           char type[100];
           char rating[100];
           char location[100];
           int establish_year;
           int staff_quantity;	
		
	
	public :
		
		    cafe()
			{
				cout<<"\nenter id= ";                cin>>this->id;
		        cout<<"enter name= ";              cin>>this->name;
		        cout<<"enter type= ";              cin>>this->type;
		        cout<<"enter rating= ";            cin>>this->rating;
		        cout<<"enter location= ";          cin>>this->location;
		        cout<<"enter year= ";              cin>>this->establish_year;
		        cout<<"enter staff_quantity= ";    cin>>this->staff_quantity;
			} 	
			
		    getdata()
			{
				cout<<"\nid= "       <<this->id <<endl
				<<"name= "           <<this->name<<endl
				<<"type="            <<this->type<<endl
				<<"rating= "         <<this->rating<<endl
				<<"loction= "        <<this->location<<endl
				<<"year= "           <<this->establish_year<<endl
				<<"staff quantity= " <<this->staff_quantity<<endl;                   
			}
		
		
};

int main()
{
	
	int i,n;
	cout<<"enter cafe= ";
	cin>>n;
	cafe f[n];

	
	for(i=0;i<n;i++)
	{
		f[i].getdata();
	}
	return 0;
}
