#include<iostream>
using namespace std;


// //type qualifier in c++
// //1-const
// int main()
// {
//     int a= 10;
//     const int b = 20;
//     a = 20;     //normal variable can be modified/updated
//     //b = 10;   //Error: constant can't change 
//     cout << a << endl;
//     cout << b << endl;
//     return 0;
// }



//2-Mutable
class test 
{
    public:
        int a;

        // mutable will allow variable b to be updated even though its called by a const object
        mutable int b;
        test(int a, int b)
        {
            this->a = a;
            this->b = b;
        }
        void display()
        {
            cout << "a= "<< a << "b= " << b << endl;
        }
};
int main()
{
    // const object, we can only read but not change values
    // values can only be initialized once, here we using a
    // parameterized constructor to initialize them
    const test t1(10,20);

    // reading values is allowed as we are not changing
    // data members of const object
    cout << t1.a << " " << t1.b << endl;

    // Below gives error as vaiable a can't be changed( because object is constant)
    //t1.a = 20;
   
   //accessible becoz the variable is mutable and constant object is modified when it is mutable
    t1.b = 30; 

    cout << t1.a << " " << t1.b << endl;
    
}