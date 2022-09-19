#include<iostream>
using namespace std;
int main()
{	
	char a[100];
	int i;
   
	cout<< "Enter a letter : ";
	cin>>a;
   
	for (i = 0 ; a[i] ; i++) 
	{
    	if(a[i] >= 97 && a[i] <= 122)
    	{
    			a[i] = a[i] - 32;
		}
        
        	
        else if(a[i] >= 65 && a[i] <= 90)
        {
        	a[i] = a[i] + 32;
		}
        	
    	
	}
	cout<< "Letter in Toggle Case = "<< a;

}
