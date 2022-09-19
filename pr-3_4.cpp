Aim:WAP which illustrates the use of public and private access modifiers.

Program:
#include<iostream>
using namespace std;
class student {
public:
int id;
private:
int fees;
public :
void readdata() {
cout << "please enter id: ";
cin >> id;
cout << "please enter fees: ";
cin >> fees;
}
void print() {
cout << "fees:" << fees << endl;
}

};
int main() {
student s;
s.readdata();
cout << "id:" << s.id << endl;
s.print();
return 0;
}

