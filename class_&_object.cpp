#include<iostream>
using namespace std;


//Class and Objects in c++

//create a class student
class student       //class is a user-defined data-type which consist data member and member function
{   
    //Access modifier
    public:

        //data members (variables)
        int roll,weight,age;
        string name;

        //member function (Function)
        //function definition and declaration inside class 
        void getdata()
        {
            cout << "Name = " << name << endl;
            cout << "Roll = " << roll << endl;
        }

        //function declaration inside class
        void getdata1();
};

//function definition outside class 
void student :: getdata1()
{
    cout << "weight = " << weight << endl;
    cout << "age = " << age << endl;
}
int main()
{
    //create class student object s1
    student s1;

    //Assigning values for student s1
    s1.roll = 10;
    s1.age = 21;
    s1.weight = 51;
    s1.name = "balaji";

    //calling function for s1 object
    s1.getdata();
    s1.getdata1();

    return 0;
}



