Aim:WAP to create a class to read and add two times.

Program:
#include<iostream>
using namespace std;
class time {
public :
int s,m,h;
public :
void readdata() {
cout << "please enter hours:";
cin >> h;
cout << "please enter miniutes:";
cin >> m;
cout << "please enter seconds:";
cin >> s;

}

};
int main() {
int ts,tm,th;
time t1,t2;
t1.readdata();
t2.readdata();

ts=t1.s+t2.s;
tm=t1.m+t2.m+(ts/60);
th=t1.h+t2.h+(th/60);
ts=ts%60;
tm=tm%60;

cout << th << ":" << tm << ":" << ts ;
return 0;
}

