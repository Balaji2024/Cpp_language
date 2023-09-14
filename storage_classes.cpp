#include<iostream>
using namespace std;

// auto storage class

// void storage()
// {
//     auto a = 10;
//     ++a;
//     cout << a << endl;
// }
// int main()
// {
//     storage();
//     storage();
//     return 0;
// }


//register storage class

// int main()
// {
//     int n;
//     register int fact = 1;
//     cin >> n;
//     for(int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     cout << fact << endl;

// }


//static storage class

// void demo()
// {
//     int a = 10;
//     static int x = 10;
//     ++a;
//     ++x;
//     cout << a <<" "<< x <<endl;

// }
// int main()
// {
//     demo();
//     demo();
//     return 0;
// }


//extern storage class

// int test = 10;
// void add(int n)
// {
//     test = test + n;
// }
// extern int test;
// int main()
// {
//     cout << test << endl;
//     add(5);
//     cout << test << endl;
//     return 0;
// }


//Mutable storage class

class demo
{
    public:
        mutable int x;
        int y;
};

int main()
{
    const demo d = {5,10}; 
    d.x = 100;
    cout << "x= " << d.x << endl;
    cout << "y= " << d.y << endl;

}