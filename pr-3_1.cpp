Aim:WAP to create a class to read and add two distance.
Program:
#include<iostream>
using namespace std;
class Distance {
public :
int feet1,feet2,inch1,inch2,totalfeet,totalinch;
public :
void readdata1() {
cout << " enter feet 1:";
cin >> feet1;
cout << " enter inch 1:";
cin >> inch1;
}
void readdata2() {
cout << " enter feet 2:";
cin >> feet2;
cout << " enter inch 2:";
cin >> inch2;
}
  void adddistance() {
 totalfeet = feet1 + feet2;
 totalinch = inch1 + inch2;
 while( totalinch >= 12)  
{
 totalinch = totalinch - 12;
 totalfeet++;
}
 cout << "total distance is:" << totalfeet << " " <<totalinch;
}

};
int main() 
{
 Distance d;
  d.readdata1();
  d.readdata2();
  d.adddistance();
  return 0;
}

