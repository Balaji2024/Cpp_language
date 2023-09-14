#include<iostream>
using namespace std;



//Polymorphism in c++
//Polymorphism means one task many forms
//There are two types of polymorphism
//1.Compile-time polymorphism
//2.Run-time polymorphism
//compile-time polymorphism can be divided into two types
//1.Function overloading
//2.Operator overloading


// //Function overloading
// int sum(int a, float b)
// {
//     cout << "using function with 2 arguments" <<endl;
//     return a+b;
// }
// float sum(float a, int b, int c)
// {
//     cout << "using function with 2 arguments" <<endl;
//     return a+b+c;
// }
// int sum(int a,float b, float c, int d)
// {
//     cout << "using function with 2 arguments" <<endl;
//     return a+b+c+d;
// }
// int main()
// {
//     cout << "The sum of 3 and 4 is: " << sum(3,4) << endl;
//     cout << "The sum of 3, 4 and 5 is: " << sum(3,4,5) << endl;
//     cout << "The sum of 3, 4, 5 and 6 is: " << sum(3,4,5,6) << endl;

//     return 0;
// }



// //2.Operator overloading
// class overload
// {
//     private:
//         int a = 1, b = 2, ct1 = 3, ct2 = 4;

//     public:
//         void display()
//         {
//             cout << a << " " << b << " " << ct1 << " " << ct2 << " respectively" << endl;
//         }

//     // ++ operator overloading defined here
//     void operator ++()
//     {
//         a = a + 10;
//         b = b + 10;
//         ct1 = ct1 + 10;
//         ct2 = ct2 + 10;
//     }    
// };
// int main()
// {
//     overload obj;

//     cout << "Values before overload " << endl;
//     obj.display();

//     // calling overloaded ++ operator on obj object4
//     ++obj;

//      cout << "Values after overload " << endl;
//     obj.display();

// }






//Assignment operator overloading in c++
class length
{
    private:
       int  km;
       int  m;

    public:
        length()        //default constructor
        {
            km = 0;
            m = 0;
        }   
        length(int km, int m)       //overload constructor
        {
            this->km = km;
            this->m = m;
        } 
        // void operator = (const length &l1) 
        // { 
        //     km = l1.km;
        //     m = l1.m;
        // }
        void display()
        {
            cout << km << " km " << m << " m " <<endl;
        }

};
int main()
{
    //Assigning by overloading constructor
    length l1(10,100);
    length l2(20,200);

    cout << "l1 length: " ;
    l1.display();

    cout << "l2 length: " ;
    l2.display();

    l1 = l2;        //overloading assignment operator to copy values
    //assignment operator can directly copy values from one object to another

    cout << "l1 length: " ;
    l1.display();

    cout << "l2 length: " ;
    l2.display();

    return 0;


}