#include<iostream>
using namespace std;


// //constructor internally to the class
// class demo
// {
//     public:
//         int a;
//         demo()  //default constructor declaration here
//         {
//             a = 10;
//         }
// };
// int main()
// {   demo d1;
//     cout << d1.a << endl;    
//     return 0;
// }

// //constructor externally to the class
// class demo
// {
//     public:
//         int a;
//         demo();  //default constructor declaration here
// };
// demo :: demo()  //default constructor definition here
// {
//     a = 10; //initialization of values by the user
// }
// int main()
// {   demo d1;
//     cout << d1.a << endl;    
//     return 0;
// }


//Types of constructor 
// 1- Default constructor
// 2- Parameterised constructor
// 3- Copy constructor


// // 1- Default constructor
// // default constructor inside the class
// class demo
// {
//     public:
//         int a,b;
//     demo()  //default constructor decalre & define here
//     {
//         a = 10;
//         b = 20;
//         cout << a+b << endl;
//     }
// };
// int main()
// {
//     demo d1; //Creating object to invoke default constructor.
// }




// // 1- Default constructor
// // default constructor outside the class
// class demo
// {
//     public:
//         int a,b;
//     demo();  //default constructor declare here
    
// };
// demo :: demo()  //default constructor definition here
//     {
//         a = 10;
//         b = 20;
//         cout << a + b << endl;
//     }
// int main()
// {
//     demo d1;    //Creating object to invoke default constructor.
// }

//2- Parameterized constructor
// In parameterized constructor arguments can be passed to the parameterrized constructor
// these arguments help to initialize each data member of the class with different values
// parameterized constructor helpful for constructor overloadig 
// parameterized constructor insidde the class
// class demo
// {
//     public:
//         int a,b;
//     demo(int x, int y)  //parameterized constructor decalre & define inside class
//     {
//         a = x;
//         b = y;
//         cout << a+b << endl;
//     }
// };
// int main()
// {
//     //implicit call
//     demo d1(10,20); //parameterized constructor called.
//     //explicit call 
//     demo d2 = demo(20,30);
// }




// // parameterized constructor outside the class
// class demo
// {
//     public:
//         int a,b;
//         demo()      //default constructor 
//         {

//         }
//     demo(int x, int y);  //parameterized constructor declare here
    
// };
// demo :: demo(int x, int y)  //parameterized constructor definition here
//     {
//         a = x;
//         b = y;
//         cout << a + b << endl;
//     }
// int main()
// {
//    //implicit call
//    demo d1(10,20); //parameterized constructor called.
 
//    //explicit call 
//    demo d2 = demo(20,30);
//    cout << d2.a;
//    demo d3; //default constructor called.
//    return 0;
// }



// //Copy constructor 
// class demo 
// {
//     private:        //access modifier
//         int a,b;    //private data member 
//     public:
//         demo()      //default constructor 
//         {
//             cout << "Default constructor called" << endl;
//         }
//         demo(int x,int y)
//         {
//             a = x;
//             b = y;
//             cout << "Parameterized constructor called here" << endl;
//         }
//         demo(const demo &d3)        // User defined Copy constructor 
//         {
//             a = d3.a;
//             b = d3.b;
//             cout << "Copy constrctor called here" << endl;
//         }
//         int getA()
//         {
//             return a;
//         }
//         int getB()
//         {
//             return b;
//         }
// };
// int main()
// {
//     demo d1;        //default constructor call
//     demo d2(10,20);     //Trying to call parameterized constructor here
//     demo d3 = d2;       // Trying to call copy constructor here 
//     demo d4(d2);        // Trying to call Copy constructor here (Another way of doing so)
//     demo d5;
//     d5 = d2;    // Here there is no copy constructor called only assignment operator happens
//     cout << d1.getA() << "  " << d1.getB() << endl;
//     cout << d2.getA() << "  " << d2.getB() << endl;
//     cout << d3.getA() << "  " << d3.getB() << endl;
//     cout << d4.getA() << "  " << d4.getB() << endl;
//     cout << d5.getA() << "  " << d5.getB() << endl;
    
// }





//Destructor
//opposite to the constructor
//constructor initialize the value for an object
//while destructor destroy the objects
//destructor is called when 
//The object goes out of scope of execution 
//destructor called automatically by compiler if are not defined manually by the user 
//destructor have same name as the name of the class 
//No argument passing an d copying in destructor
//destructor preseded with ~(tild sign before destructor name)

class demo
{
    public:
        int x,y;
    demo()      //default constructor
    {
        cout <<  "Default constructor called" << endl;
    }    
    demo(int a, int b)      //parameterized constructor 
    {
        x = a;
        y = b;
        cout << "Parameterized constructor called "<< endl;
        cout << a+b << endl;
    }
    ~demo()     //destructor 
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    demo d1;        //default constructor 
    demo d2(10,20); //parameterized constructor Called
    int temp = 1;
    if(temp)
    {
        demo d3(2,5);
    }
    // The scope of the object initialised d3 has ended here so the destructor will be called automatically by the system.
}

// Destructor called for Demo as demo object's out of scope