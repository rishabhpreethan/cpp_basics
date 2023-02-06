#include<iostream>
using namespace std;
int main(){
    // variables 
    string name="rishabh";
    int age=20;
    char grade='A';
    double math=99.9;
    bool flag=false;

    cout << "rishabh is\n" << age << endl;

    // functions
    cout << name.length() << endl;
    name[0]='R';
    cout << name[0];
    cout << name.find("Rish") << endl;
    cout << name.substr(0,4);

    return 0;
}