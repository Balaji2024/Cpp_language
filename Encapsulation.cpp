#include<iostream>
using namespace std;

//encapsulation-combines data member and member function into a single unit(class)
//It helps in hiding the data outside the access
//it can be acheived by using access modifiers

class bankacc
{
    // data members are private and can not be accessed directly access specifiers
    private:
        double accNo,balance;
    

     // member function interface is public
    // to allow specific methods to work with data members
    public:
        bankacc(double a, double b) //parameterized constructor
        {
            accNo = a;
            balance = b;
        }

    int deposit(double amt)
    {
        balance+=amt;
        return balance;
    }  
    int withdraw(double amt)
    {
        if(balance>=amt)
        balance-=amt;
        return balance;
    }  
    double getbalance()const
    {
        return balance;
    }


};
int main()
{
    bankacc obj(15021821,988484);
    cout << obj.deposit(98784)<<endl;
    cout << obj.withdraw(86748)<<endl;
    cout << obj.getbalance()<<endl;
    
    return 0;
}