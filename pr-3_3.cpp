Aim:WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.

Program:
#include<iostream>
using namespace std;
class time {
public:
int second;
public:
void readdata() {
cout << "please enter second: ";
cin >> second;
}

};
int main() {
int hh,mm,ss,t;
time t;
t.readdata();
hh=t.second/3600;
t=t.second%3600;
mm=t/60;
ss=t%60;
cout << hh << ":" << mm << ":" << ss;
return 0;
}
