#include<iostream>
using namespace std;

// //Friend function in c++
// class test
// {
//     private:
//         int sal = 20000;
//     friend int salary(test t1);  //friend function declaration   
// };

// int salary(test t1)      // friend function definition 
// {
//     t1.sal = t1.sal + 100000;    //Access of private data 
//     return t1.sal;
// }
// int main()
// {
//     test t1;
//     cout << "Salary is : " <<salary(t1);     //calling a friend function
    
//     return 0;
// }







// //Another example of friend function
// class test2;
// class test
// {
//     private:
//         int a;
//     public:
//         void assign(int i)
//         {
//             a = i;
//         }
//     friend int product(test t1, test2 t2);
// };
// class test2
// {
//     private:
//         int b;
//     public:
//         void assign(int i)
//         {
//             b = i;
//         }
//     friend int product(test t1, test2 t2);
// };

// int product(test t1, test2 t2)
// {
//     return t1.a*t2.b;
// }
// int main()
// {
//     test t1;
//     test2 t2;
//     t1.assign(20);
//     t2.assign(20);
//     cout << "Product is : " << product(t1,t2);
// }






// //friend function is friendly to two classes
// class test2;
// class test1
// {
//     private:
//         int id;
//     public:
//         void setdata(int i)
//         {
//             id = i;
//         }    
//     friend void min(test1 t1, test2 t2);
// };
// class test2
// {
//     private:
//         int id2;
//     public:
//         void setdata(int i)
//         {
//             id2 = i;
//         }    
//     friend void min(test1 t1, test2 t2);
// };

// void min(test1 t1, test2 t2)
// {
//     if(t1.id >= t2.id2)
//     cout << t1.id << endl;
//     else
//     cout << t2.id2 << endl;
// }
// int main()
// {
//     test1 t1;
//     test2 t2;
//     t1.setdata(10);
//     t2.setdata(20);

//     min(t1,t2);
//     return 0;
// }







// //Friend class in c++
// class test2;
// class test1
// {
//     private:
//         int a;
//     public:
//         test1()
//         {
//             a = 25;
//         }
//     friend class test2;     //defining friend class  
//     // void p()
//     // {
//     //     test2 t2;
//     //     return t2.b+a;   //cannot access because class test will not be friend of class test2 
//     // }
// };

// class test2
// {
//    test1 t1;
//     private:
//         int b;
//     public:
//         test2()
//         {
//             b = 25;
//         }
//     void sum()
//     {
        
//         int c = t1.a+b;//can access because class test2 will be friend of class test 
//         cout << c << endl;        
//     }  
// };
// int main()
// {
//     test2 t2;
//     t2.sum();
//     return 0;    
// }








// //Another example of friend class
// class test1
// {
//   int a,b;
//   public:
//   void get()
//   {
//    cout<<"enter 2 integers"; 
//    cin>>a>>b;
//   }
//   friend class test2;//defining friend class
// };
// class test2
// {
//    test1 t1;
//    public:
//    void put()
//   {
//       t1.get();
//       cout<<"a: "<<t1.a<<endl;
//        cout<<"b: "<<t1.b<<endl;
//    }
// };
// int main()
// {
//     test2 t2;
//     t2.put();
// }