#include<iostream>
using namespace std;

int main()
{
    int a = 10;  
    int &b = a;   // b reference to a
    int &c = a;   // c reference to a
    // now b & a have a same address 
    // B & c becomes alias name for a
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    b = 20; //Any change in ‘b’ will also reflect change int ‘a’ & ‘c’ and vice-versa
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    // all these alias name have a same address 
    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;

    return 0;
}