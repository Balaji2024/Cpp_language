#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 12.5;
    char ch = 'B';
    short int c = 65;
    double d = 45.56;

    d = d + c;  //short is converted into double type
    a = a + b;  //float is converted into integer type
    b = b + ch; //char is converted into float type

    cout<< d << endl;
    cout<< a << endl;
    cout<< b << endl;


    return 0;
}