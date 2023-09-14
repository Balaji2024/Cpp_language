#include<iostream>
using namespace std;

// class test
// {
//     public:
//         int id;//data member (also instance variable)      
//         float salary;//data member (also instance variable)      
//         string name;//data member (also instance variable)      
//     test(int id, float salary, string name)
//     {
//         this->id = id;//It can be used to pass current object as a parameter to another method
//         this->salary = salary;//It can be used to pass current object as a parameter to another method
//         this->name = name;//It can be used to pass current object as a parameter to another method
//     }   
//     void display()
//     {
//         cout << id << " " << salary << " " << name << endl;
//     }

// };
// int main()
// {
//     test t1 = test(100,45000,"Balaji");//creating an object of a class
//     test t2 = test(101,85000,"diksha");
//     t1.display();
//     t2.display();
    
//     return 0;
// }





//another example of this operator
class test 
{
    public:
        int a;
    void show(int b)
    {
        //“this” pointer helps to points to the object which invokes the member function.
        this->a = b;   //this operator avoid instance variable and local variable name collision
    }  
    void display()
    {
        cout << a << endl;
    }  
};
int main()
{
    test t1;
    t1.show(5); //“this” pointer helps to points to the object which invokes the member function.
    t1.display();
}