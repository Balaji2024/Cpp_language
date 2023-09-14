#include <iostream>
using namespace std;

// int main()
// {
//     // sizeof datatypes and variables
//     int a;
//     float b;
//     char c;
//     cout << sizeof(int) << endl;
//     cout << sizeof(float) << endl;
//     cout << sizeof(char) << endl;
//     cout << sizeof(a) << endl;
//     cout << sizeof(b) << endl;
//     cout << sizeof(c) << endl;

//     return 0;
// }


// //sizeof array
// int main()
// {
//     int arr1[5]={1,2,3,4,5};
//     char arr2[3]={'i','l','u'};
    
//     //total size of array
//     cout << sizeof(arr1) << endl;
//     cout << sizeof(arr2) << endl;

//     //items in array
//     int items = sizeof(arr1)/sizeof(arr1[0]);
//     cout << items << endl;

//     return 0;
// }



// // sizeof structure
// struct student
// {
//     int id;
//     char name[20];
//     float salary;
// };

// int main()
// {
//     student s1;
//     cout << sizeof(s1) << endl;

//     return 0;
// }


// //sizeof union
// union student
// {
//     int id;
//     char name[20];
//     float salary;
// }s1;

// int main()
// {
//     cout << sizeof(s1) << endl;

//     return 0;
// }


//sizeof class and objects
class test
{
    public:
    int id = 10;
    float b = 10.20;
    double c = 5.2;
};
int main()
{
    test t;
    cout << sizeof(test) << endl;
    cout << sizeof(t) << endl;

    return 0;
}