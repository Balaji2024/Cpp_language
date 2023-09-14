#include<iostream>
using namespace std;

enum student
{
    sunday,
    monday,
    tuesday = 5,
    wednesday
};
int main()
{
    enum student s1;    //create object
    s1 = monday;    //initialize enum member
    cout << s1 << endl;
    cout<< sunday << endl;  //position number of enum member
    cout<< sizeof(s1) << endl;  //4 bytes ....number of enum member is equal to size
    cout<< tuesday << endl; //position number of enum member
    cout<< wednesday << endl; //position number of enum member (tuesday + 1) = 5+1 = 6

    return 0;
} 