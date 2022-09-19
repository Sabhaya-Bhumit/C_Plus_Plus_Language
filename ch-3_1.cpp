
#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	public:
		int id;
		char name[100];
		int role;
		int age;
		int salary;
		char experience[100];
		char city[100];
		char comp_name[100];
		
};
main()
{
	employee e[100];
	int i , n;
	
	cout << "Enter Employee Number:-";
	cin >> n;
	for(i=0; i<n; i++)
	{
		cout << "Employee No:-";
		cout << i+1 << endl;
		
		cout << "ID No:-";
		cin >> e[i].id;
		
		cout << "Enter Name:-";
		cin >> e[i].name;
		
		cout << "Enter Role:-";
		cin >> e[i].role;
		
		cout << "Enter Age:-";
		cin >> e[i].age;
				
		cout << "Enter Salary:-";
		cin >> e[i].salary;
		
		cout << "Enter Experience:-";
		cin >> e[i].experience;	
		
		cout << "Enter City:-";
		cin >> e[i].city;
				
		cout << "Enter Company_Name:-";
		cin >> e[i].comp_name;	
		
		cout << endl;	
	}
	
	for(i=0; i<n; i++)
	{
		cout << "Employee no:- " << i+1 << endl << "Emp Id:- " << e[i].id << endl << "Emp Name:- " << e[i].name << endl << "Emp Role:- " << e[i].role 
			 << endl << "Emp Age:- " << e[i].age << endl << "Emp Salary:- " << e[i].salary << endl<< "Emp Experience:- " << e[i].experience << endl
			 << "Emp City:- " << e[i].city << endl << "Emp Company_Name:- " << e[i].comp_name  << endl;
		cout << endl;
	
	}
}
