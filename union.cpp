#include<iostream>
#include<string.h>
using namespace std;

union student
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    union student s1;
    s1.id = 10;
    strcpy(s1.name,"Madhu");
    s1.salary = 56666;

    cout << s1.id << endl;
    cout << s1.name << endl;
    cout << s1.salary << endl;

    cout << sizeof(s1) << endl;
    return 0;
}