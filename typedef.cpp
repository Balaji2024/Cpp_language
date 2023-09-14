#include<iostream>
using namespace std;

typedef struct student
{
    int id;
    char name[20];
    float salary;
}st1;

int main()
{
    typedef int bala;
    bala x = 100;
    cout<< x << endl;

    typedef bala madhu;
    typedef madhu ankita;
    typedef ankita mayu;
    int a = 10;
    bala b = 20;
    madhu c = 30;
    ankita d = 40;
    mayu e = 50;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;


    st1 s1,s2;
    s1.id = 1;
    s2.id = 2;
    cout << s1.id << endl;
    cout << s2.id << endl;

  
    return 0;
}