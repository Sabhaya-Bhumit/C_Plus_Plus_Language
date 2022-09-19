#include<iostream>
#include<string.h>
using namespace std;

class Car
{
	public :
		int id;
		char company_name[1000];
		char color[1000];
		char model[1000];
		int release_year;
};

int main()
{
	Car c[100];
	int i;
	
	for(i = 0 ; i < 4 ; i++)
	{
		cout << "Details of Car no... : ";
		cout << i+1;
			
		cout << endl << "Enter ID : ";
		cin >> c[i].id;		
		
		cout << "Enter Company Name : ";
		cin >> c[i].company_name;
		
		cout << "Enter Color : ";
		cin >> c[i].color;
		
		cout << "Enter Model : ";
		cin >> c[i].model;
		
		cout << "Enter Release Year : ";
		cin >> c[i].release_year;

	}
	for(i = 0 ; i < 4 ; i++)
	{
		cout << endl <<"Details of Car no... : ";
		cout << i+1 << endl;
			
		cout << "ID : ";
		cout << c[i].id << endl;		
		
		cout << "Compane Name : ";
		cout << c[i].company_name << endl;
		
		cout << "Color : ";
		cout << c[i].color << endl;
		
		cout << "Model : ";
		cout << c[i].model << endl;
		
		cout << "Release Year : ";
		cout << c[i].release_year << endl;
			
	}	
	return 0;
}
