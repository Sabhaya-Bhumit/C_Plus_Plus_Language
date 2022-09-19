#include<iostream>
using namespace std;

class admin
{
	public:
		char company_name[100];
   		int  manager_salary;
   		int employee_salary;
  		int total_staff;
  		int total_annual_revenue;
    	char can_terminate[100];
    
	void setdata()
	{
	    cout<<"enter company name= ";          cin>>company_name;
		cout<<"enter total annual revenue= " ;  cin>>total_annual_revenue;
		cout<<"enter can terminate= ";         cin>>can_terminate;
	}	
    void myAccess()
    {
    	cout<<"\n\ncompany name= "           <<company_name<<endl
       	    <<"total annual revenue= "   <<total_annual_revenue<<endl
    	    <<"can terminate= "          <<can_terminate<<endl;
	}
};
class Manager:public admin
{
	public:
	void setdata()
	{
	    cout<<"enter manager salary= ";    		cin>>manager_salary;
		cout<<"enter total staff= ";       		cin>>total_staff;
	}
	void myAccess()
	{
		cout<<"\n\nmanager salary="<<manager_salary<<endl
		    <<"total staff="<<total_staff<<endl;
		
	}
};
class employee :public Manager
{
	public:
	
	void setdata()
	{
		cout<<"enter employee salary= ";    		cin>>employee_salary;
		cout<<"enter total staff= ";       		cin>>total_staff;
	}
	void myAccess()
	{
		cout<<"\n\nemployee salary="<<manager_salary<<endl
		    <<"total staff="<<total_staff<<endl;
	}
};

int main()
{
      admin a;
      Manager m;
      employee e;
      cout<<"------------admen detail----------"<<endl;
	  a.setdata();
	  a.myAccess();
	  cout<<endl<<"------------manager detail----------"<<endl;
	  m.setdata();
	  m.myAccess();
	  cout<<endl<<"------------employee detail----------"<<endl;
	  e.setdata();
	  e.myAccess();
	  
	return 0;
}
