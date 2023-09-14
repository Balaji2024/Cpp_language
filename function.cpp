#include <iostream>
using namespace std;

// function prototype
// formal parameter---arguments
//  int sum(int a,int b);   //function declaration

// int main()
// {
//     int num1;
//     int num2;
//     cout << "Enter value of num1 : " << endl;
//     cin >> num1;
//     cout << "Enter value of num2 : " << endl;
//     cin >> num2;

//     //actual parameter
//     sum(num1,num2);     //function calling

//     return 0;
// }
// //formal parameter
// int sum(int a, int b)   // function definition
// {
//     int c = a + b;
//     return c;
// }






// //Call by value
// void swap(int a,int b);   //function declaration

// int main()
// {
//     int num1;
//     int num2;
//     cout << "Enter value of num1 : " << endl;
//     cin >> num1;
//     cout << "Enter value of num2 : " << endl;
//     cin >> num2;

//     cout << "values are in main before swap functuin " << endl;
//     cout << "num1 = " << num1 << "  num2 = " << num2 <<endl;
//     //actual parameter---not change in actual values ....whatever changes in other function it doesn't change

//     swap(num1,num2);     //function calling----passing actual values to the function
//     cout << "values are in main after swap functuin " << endl;
//     cout << "num1 = " << num1 << "  num2 = " << num2 <<endl;

//     return 0;
// }
// //formal parameter
// void swap(int a, int b)   // function definition
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;

//     cout << "values are in functuin swap " << endl;
//     cout << "num1 = " << a << "  num2 = " << b <<endl;
// }




// //Call by reference----using pointers
// void swap(int *a,int *b);   //function declaration

// int main()
// {
//     int num1;
//     int num2;
//     cout << "Enter value of num1 : " << endl;
//     cin >> num1;
//     cout << "Enter value of num2 : " << endl;
//     cin >> num2;

//     cout << "values are in main before swap functuin " << endl;
//     cout << "num1 = " << num1 << "  num2 = " << num2 <<endl;

//     //actual parameter----change in actual parameter----when change in formal parameter then change actual parameter
//     swap(&num1,&num2);     //function calling----passing actual address to the function
//     cout << "values are in main after swap functuin " << endl;
//     cout << "num1 = " << num1 << "  num2 = " << num2 <<endl;

//     return 0;
// }
// //formal parameter
// void swap(int *a, int *b)   // function definition
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;

//     cout << "values are in functuin swap " << endl;
//     cout << "num1 = " << *a << "  num2 = " << *b <<endl;
// }




// //Call by reference----using reference variable
// void swap(int &a,int &b);   //function declaration

// int main()
// {
//     int num1;
//     int num2;
//     cout << "Enter value of num1 : " << endl;
//     cin >> num1;
//     cout << "Enter value of num2 : " << endl;
//     cin >> num2;

//     cout << "values are in main before swap functuin " << endl;
//     cout << "num1 = " << num1 << "  num2 = " << num2 <<endl;

//     //actual parameter----change in actual parameter----when change in formal parameter then change actual parameter
//     swap(num1,num2);     //function calling----passing actual address to the function
//     cout << "values are in main after swap functuin " << endl;
//     cout << "num1 = " << num1 << "  num2 = " << num2 <<endl;

//     return 0;
// }
// //formal parameter
// void swap(int &a, int &b)   // function definition
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;

//     cout << "values are in functuin swap " << endl;
//     cout << "num1 = " << a << "  num2 = " << b <<endl;
// }






// member function in c++
// Function declared in the class is known as member function
// class can have number of member function
// member function can be defined in two ways
//  1-member function inside the class
//  2-member function outside the class

// //Member function inside the class
// class cube
// {
//     public:
           // member functions
//         double length;
//         double breadth;
//         double height;

//         double getdata()        //member function declared and defined inside class
//         {
//             return length*breadth*height;
//         }

//         void setlength(double l)
//         {
//             length = l;
//         }
//         void setbreadth(double b)
//         {
//             breadth = b;
//         }
//         void setheighth(double h)
//         {
//             height = h;
//         }

// };

// int main()
// {
//     cube c1;
//     c1.setlength(8.6);
//     c1.setbreadth(12.6);
//     c1.setheighth(6.6);

//     cout << "The volume is : " << c1.getdata() << endl;
// }





// // Member function outside the class
// class cube
// {
// public:
//     // member variables
//     double length;
//     double breadth;
//     double height;

//     double getdata(); // member function declared inside class but defined in outside the class
//     void setlength(double l);
//     void setbreadth(double b);
//     void setheighth(double h);
// };


// // all class's members functions
// // defined outside the class with scope resolutor ::
// double cube :: getdata() // member function declared inside class but defined in outside the class
// {
//     return length * breadth * height;
// }

// void cube :: setlength(double l)
// {
//     length = l;
// }
// void cube :: setbreadth(double b)
// {
//     breadth = b;
// }
// void cube :: setheighth(double h)
// {
//     height = h;
// }
// int main()
// {
//     cube c1;
//     c1.setlength(8.6);
//     c1.setbreadth(12.6);
//     c1.setheighth(6.6);

//     cout << "The volume is : " << c1.getdata() << endl;
// }




//Accessing private member function of a class
class cube
{
    private:
        //member functions   or  data membersx
        double length;
        double breadth;
        double height;
        void sum();
        
    public:
        void s();
        double getdata()        //member function declared and defined inside class
        {
            return length*breadth*height;
        }

        //setters : to set values declared and defined inside class
        void setlength(double l)
        {
            length = l;
        }
        void setbreadth(double b)
        {
            breadth = b;
        }
        void setheight(double h)
        {
            height = h;
        }

        // getter functions created to get values
        int getlength()
        {
            return length;
        }
        int getbreadth()
        {
            return breadth;
        }
        int getheight()
        {
            return height;
        }

};

void cube :: s()    //public member function
{
    sum();  //private member function access through public member function 
}
void cube :: sum()  //private member function
{
    cout << "hello";
}
int main()
{
    cube c1;
    c1.setlength(8.6);
    c1.setbreadth(12.6);
    c1.setheight(6.6);

    cout << "The volume is : " << c1.getdata() << endl;
    cout << c1.getbreadth() << endl;
    cout << c1.getheight() <<endl;
    cout << c1.getlength() << endl;
   c1.s();
}
