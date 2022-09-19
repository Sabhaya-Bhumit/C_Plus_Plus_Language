#include<iostream>
using namespace std;
class harshit;

class bhumit
{
	private :
		int hh;
		int mm;
		int ss;
	
		public :
	       setdata()
	       {
	       	cout<<"enter bhumit time\n"<<endl;
	       	cout<<"enter you hour=";     cin>>hh;
	     	cout<<"enter you minit= ";   cin>>mm;
	     	cout<<"enter you second= ";  cin>>ss;	
           }
       	friend void vishal(bhumit,harshit);	

};
class harshit
{
	private :
		int hh;
		int mm;
		int ss;
	
	
		public :
			setdata()
	        {
	        	cout<<"\nenter oy harshit time\n"<<endl;
	          	cout<<"enter you hour=";     cin>>hh;
	           	cout<<"enter you minit= ";   cin>>mm;
	        	cout<<"enter you second= ";  cin>>ss;
            }
        friend void vishal(bhumit,harshit);
};
void vishal(bhumit b,harshit f)
{
  int h,m,s;
  cout<<"\naddition of time is :";
  s=(b.ss+f.ss)/60;
  m=(b.mm+f.mm)+s;
  h=(b.hh+f.hh)+(m/60);
  s=(b.ss+f.ss)%60;
  m=(b.mm+f.mm)%60;
  cout<<h<<":"<<m<<":"<<s<<endl;
}	
int main()
{
	bhumit b1;
	harshit s1;
	b1.setdata();
	s1.setdata();
	
	vishal(b1,s1);
	return 0;	
}
