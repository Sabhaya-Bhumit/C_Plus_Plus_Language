/*comp_id
- comp_name
- comp_staff_quantity
- comp_revenue (per year)
- comp_import_raw_diamonds (no. of raw diamonds
imported per year)
- comp_export_diamonds (no. of diamonds per year)
- comp_ceo (name of CEO of the company)*/
#include<iostream>
#include<string.h>
using namespace std;

class bhumit
{
    private :
    	
    	   int id;
           char name[100];
           int staff_quantity;
           int revenue;
           int raw_diamonds;
           int export_diamonds;
           char ceo[100];	
		
	
	public :
		
			bhumit( int id,char name[100],int staff_quantity,int revenue,int raw_diamonds,int export_diamonds,char ceo[100])
			{
				this->id=id;
				strcpy(this->name,name);
				this->staff_quantity=staff_quantity;
				this->revenue=revenue;
				this->raw_diamonds=raw_diamonds;
				this->export_diamonds=export_diamonds;
				strcpy(this->ceo,ceo);
			}
			
				bhumit( bhumit &b)
			{
				this->id=b.id;
				strcpy(this->name,b.name);
				this->staff_quantity=b.staff_quantity;
				this->revenue=b.revenue;
				this->raw_diamonds=b.raw_diamonds;
				this->export_diamonds=b.export_diamonds;
				strcpy(this->ceo,b.ceo);
			}
			
			void getdata()
			{
				cout<<"id= "<<this->id<<"\nname= "<<this->name<<"\nstaff_quantity="<<this->staff_quantity<<"\nrevenue= "<<this->revenue<<"\nraw_diamonds= "<<this->raw_diamonds<<"\nexport_diamonds= "<<this->export_diamonds<<"\nceo= "<<this->ceo<<endl<<endl;                   
			}
		
		
};

int main()
{
	bhumit b1(1,"bhumit",20,250,20,200,"bhumit");
	bhumit b2(2,"harshit",25,200,150,200,"harshit");
	bhumit b3=b1;
	b1.getdata();
	b2.getdata();
	b3.getdata();
	return 0;
}
