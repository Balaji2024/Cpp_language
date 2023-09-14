#include<iostream>
using namespace std;


//Public access modifiers 
// class _public
// {
//     //all data member and member function are declared under public
//     public:
//         int a, b;

//     int getdata()
//     {
//         return a*b;
//     }    
// };
// int main()
// {
//     _public p1;

//     //can be accessed outside the class
//     p1.a = 10;
//     p1.b = 20;

//     cout << "Product is : " << p1.getdata();
    
//     return 0;
// }





//Private access modifiers
//we cannot access private member outside the class, solve the above problem by following some methods
// 1-Creating getter/setters
// 2-setting private values via public function
// 3-Initializing values via constructors
// 4-Setting values via public function



// 1-Creating getter/setters

// class _public
// {
//     //these are private,and decalared private data member 
//     private:
//         int a, b;

//     //these are public, and declared public member function  
//     //private data member can be accessed by function decalred inside class   
//     public:
//     int setdata(int x, int y)
//     {
//         //setting values here
//         a = x;
//         b = y;
//     }    
//     int getdata()
//     {
//         //getting values here
//         return a*b;
//     }
// };
// int main()
// {
//     _public p1;
    
//     //Error
//     //cannot accessed private data member outside the class
//     //p1.a = 10;
//     //p1.b = 20;


//     //public member can be accessed, also can be used to set values
//     p1.setdata(10,20);
//     cout << "Product is : " << p1.getdata();
    
//     return 0;
// }








//2-setting private values via public function
// class _public
// {
//     //these are private,and decalared private data member 
//     private:
//         int a, b;

//     //these are public, and declared public member function  
//     //private data member can be accessed by function decalred inside class   
//     public:
//     int getdata()
//     {
//         return a*b;
//     }    
// };
// int main()
// {
//     _public p1;

//     //cannot accessed private data member outside the class
//     p1.a = 10;
//     p1.b = 20;

//     cout << "Product is : " << p1.getdata();
    
//     return 0;
// }





// // 3-Initializing values via constructors

// class priv
// {
//     //these are private,and decalared private data member 
//     private:
//         int a, b;

//     //these are public, and declared public member function  
//     //private data member can be accessed by function decalred inside class   
//     public:
//     priv(int x, int y)
//     {
//         a = x;
//         b = y;       
//     }
//    void display()
//     {
//         cout << "Product is : " << a*b << endl;
//     }
// };
// int main()
// {
//     priv p1(10,2);
//     p1.display();
    
//     return 0;
// }







// //4-Access using friend function or friend class
// class _public
// {
//     //these are private,and decalared private data member 
//     private:
//         int a, b;

//     //these are public, and declared public member function  
//     //private data member can be accessed by function decalred inside class   
//     public:
//     friend int setdata(_public& p1, int x, int y);
//     friend int getdata( _public p1);
    
// };
// int setdata(_public& p1, int x, int y)
// {
//     p1.a = x;
//     p1.b = y;

// }
// int getdata( _public p1)
// {
//     return p1.a*p1.b;
// }
// int main()
// {
//     _public p1;
    
//     //Error
//     //cannot accessed private data member outside the class
//     // p1.a = 10;
//     // p1.b = 20;

//     setdata(p1,10,2);
//     //friend function can access private data member of a class
//     cout << "Product is : " << getdata(p1);
    
//     return 0;
// }