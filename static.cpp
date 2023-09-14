#include<iostream>
using namespace std;


// //static variable(data member) inside function
// void countNum()
// {

//     //static variable, will only get initialised in first function call
//     static int count = 0;
//     cout << count << " " <<endl;

//     //value from previous function call is retained will be carried to next function calls
//     count++;
// }
// int main()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         countNum();
//     }

//     return 0;
// }





// //Basic properties of static data member 
// //1-static data member are initialized with zero automatically
// class test
// {
//     public:
//         static int count;       //static data member declaration
// };

// //not initiazing but make it accessible
// int test::count;
// int main()
// {
//     test t1;
//     cout << "The value of static data member is : " << t1.count <<endl;
//     return 0;
// }


// //2-static data member can be called directly using class name
// class test
// {
//     public:
//         static int count;       //static data member declaration
// };

// //not initiazing but make it accessible
// int test::count;
// int main()
// {
//     // object not create like test t1;
//     //static members can be accessed without created object
//     //just use name_Of_Class::variable_name
//     //if not declared static member's data value will be 0 by default
    
//     cout << "The value of static data member is : " << test::count <<endl;
//     return 0;
// }




// //***********************static member function in c++***********************
// //static function can only access static member of the class
// //static function or static data member can be called directly using the class name
// //static data member can be accessed with the help of a static member function
class test
{
    public:
        static int a,b;       //static data member

        int c;      //Non-static data member

        //static function definition will only work with static data members
         static int add()
        {
            // static function can only access static data members
            cout << "Enter values of A & B : " <<endl;
            cin >> a >> b;
            //cout << "a+b = " << a+b;
            return a+b;

            //following will give error
            //becoz cannot access not static data member in static function
            //cin >> c;

        }
};

//both the values become 0 by default
//definition (initializing)
int test::a;
int test::b;

int main()
{
    //calling function without create class object
    //function directly call by class name
    //test::add();

    //when function not a static, then we call the function by ceration of objecct
    //accessing static data member using static member function
    test t1;
    cout << t1.add();

    //accessing static data members using the scope resolution operator
    //cout << test::a << " " <<test::b;

    return 0;
}