#include<iostream>
using namespace std;

class bhumit
{
	public:
		int x;
		
		void setData(int x)
		{
			this->x=x;
		}

		void getData()
  {
			  cout<<"x Is : "<<this->x;
		}
		
		bhumit operator<(bhumit n)
		{
			bhumit temp;

			if(this->x > n.x)
			{
				temp.x=this->x;
			}
			else
			{
				temp.x=n.x;
			}
			return temp;
		}
};
int main()
{
	bhumit b1,b2,b3;

	b1.setData(10);
	b2.setData(15);

	b3=b2 < b1;		    
	b3.getData();

	return 0;

}
