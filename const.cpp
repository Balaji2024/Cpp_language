#include<iostream>
using namespace std;

// int main()
// {
//     // // use const variable
//     // int a = 10;     //normal variable
//     // const int b = 20;   //variable declared as constant
//     // a++;        // this is allow with normal variable
//     // b++;        //this would give an error,we are trying to change in const variable


//     // //use constant pointer 
//     //when we use constant pointer then we cannot change the address of pointer but change only current point address values
//     // int a = 10, b = 20;
//     // //use const keyword to make constant pointer
//     // int *const ptr = &a;        //const integer pointer variable point address to the variable x
//     // //ptr = &b;     //now ptr cannot changed their address
//     // *ptr = 15;  //ptr can only change the value
//     // cout << "The value of x: " << a <<endl;
//     // cout << "The value of ptr: " << *ptr <<endl;


//     // //use pointer to constant variable
//     //  //when we use pointer to constant variable then we cannot change the value of current(addressed) pointer variable
//     //  // but we can change the address 
//     // int a = 10, b = 20; //declare integer variable
//     // const int *ptr = &a;        //here a become constant variable
//     // cout << "The initail value of ptr: " << *ptr <<endl;
//     // cout << "The value of a: " << a <<endl;
//     // //*ptr = 15;  //
//     // ptr = &b;
//     // cout << "The value of ptr: " << *ptr <<endl;
//     // cout << "The value of b: " << b <<endl;
    
//     return 0;
// }   


// //use constant function as arguments
// int test(const int a)
// {
//     //if we try to change the value of const argument, then it shows an error
//     //a = a + 10;
//     cout << "The value of a : " << a << endl;
//     return 0;
// }
// int main()
// {
//     test(5);    //function call
// }


// //use not a const member function of class 
// class test
// {
//     //define the access specifier
//     public:
//             //declare int variable
//             int a = 10;
            
//             void fun()
//             {
//                 a = 0;  //it gives compile time error
//                 cout << "Not a constant member function " << a << endl;
//             }
// };
// int main()
// {
//     test obj;
//     obj.fun();
//     return 0;
// }

// //use const member function of class 
// class test1
// {
//     //define the access specifier
//     public:
//             //declare int variable
//             int a = 10;
//             //declare member function as a constant using const keyword after the name of the member function
//             void fun() const
//             {
//                 a = 0;  //it gives compile time error
//                 cout << "const member function of class " << a << endl;
//             }
// };
// int main()
// {
//     test1 obj;
//     obj.fun();
//     return 0;
    
// }

// //When a function is declared as const, it can be called on any type of object
// class test2
// {
//     //define the access specifier
//     public:
//             //declare int variable
//             int a = 10;
//             //declare member function as a constant using const keyword after the name of the member function
//             void fun() const
//             {
//                 //a = 0;  //it gives compile time error
//                 cout << "function is declared as const, it can be called on any type of object" << a << endl;
//             }
// };
// int main()
// {
//     //test obj;
//     const test2 obj; //When a function is declared as const, it can be called on any type of object
//     obj.fun();
//     return 0;
// }

// // Non-const functions can only be called by non-const objects. 
// class test3
// {
//     //define the access specifier
//     public:
//             //declare int variable
//             int a = 10;
//        
//             void fun() 
//             {
//                 a = 0;  //it gives compile time error
//                 cout << "Non-const functions can only be called by non-const objects" << a << endl;
//             }
// };
// int main()
// {
//     test3 obj;
//     //const test obj;   //it gives an error becoz below line
//     obj.fun();   //Non-const functions can only be called by non-const objects. 
//     return 0;
// }


// //use constant data member of class
// class test 
// {
//     public:
//         const int a;
//         test()
//         {
//             int b = a;
//             cout << b << endl;
//         }

// };
// int main()
// {
//     test t1;
//     cout << t1.b;
// }


// //use constant objects
// class test 
// {  
//     public:  
//         // define data member  
//         int A = 909;  
//         // create constructor of the class ABC  
//         test()  
//         {  
//             A = 10; // define a value to A  
//         }  
// };  
// int main ()  
// {  
//     // declare a constant object  
//     const test obj;  
//     cout << " The value of A: " << obj.A << endl;  
//     // obj.A = 20; // It returns a compile time error  
//     return 0;  
// }  
