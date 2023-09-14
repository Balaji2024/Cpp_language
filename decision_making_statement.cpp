#include<iostream>
using namespace std;

//return statement
int multiply(int a, int b)
{
    int mul = a * b;
    return mul;
}
 
// returns void
// function to display result
void display(int val)
{
    cout << "The product is : "<< val;
    return;
}
int main()
{
    // int i;
    // cin >> i;
    // int a,b;
    // a=5,b=10;
    // //if statement
    // if(i>0)     //if condition is true then execute this block
    // {
    //     cout << "this is if block" << endl;  
    // }


    // //if-else statement
    // if(i>0)     //if condition is true then execute if block
    // {
    //     cout << "this is if block" << endl;  
    // }
    // else   //if condition is false then execute else block
    // {
    //     cout << "this is else block" << endl;
    // }


    // //if-else-if ladder
    // // execute one of the true block
    // if(i==10)     //if condition is true then execute if block
    // {
    //     cout << "this is if block" << endl;  
    // }
    // else if(i<15)
    // {
    //     cout << "this is else-if block" << endl;
    // }
    // else   //if condition is false then execute else block
    // {
    //     cout << "this is else block" << endl;
    // }


    // // nested if-else statement
    //  if(i<10)     //if condition is true then execute inside if block
    // {
    //     cout << "this is outside if block" << endl;  
    //      if(i<0)     //if condition is true then execute if block
    //     {
    //     cout << "this is nested if block" << endl;  
    //     }
    //     else   //if condition is false then execute else block
    //     {
    //     cout << "this is nested else block" << endl;
    //     }

    // }
    // else   //if condition is false then execute else block
    // {
    //     cout << "this is outside else block" << endl;
    // }


    //switch statement
    // switch(i)
    // {
    //     case 1:
    //         cout << a+b << endl;
    //         break;
    //     case 2:
    //         cout << a-b << endl;
    //         break;
    //     case 3:
    //         cout << a*b << endl;
    //         break;
    //     case 4:
    //         cout << b/a << endl;
    //         break;
    //     default:
    //         cout << "enter valid number"  << endl;

    // }



    // Jump statements
    //Break  // basically used in switch statements
    //Continue
    //goto
    //return

    // //break
    // for(int i = 1; i <= 10; i++)
    // {
    //     if(i % 5 == 0)
    //     {
    //         break;
    //     }
    //  cout << "i :" << i << endl;
       
    // }


    //  //continue
    // for(int i = 1; i <= 10; i++)
    // {
    //     if(i % 5 == 0)
    //     {
    //         continue;
    //     }
    //  cout << "i :" << i << endl;
       
    // }


    // //goto statement 
    // ineligible:
    //     cout << "Enter age " <<endl;
    //     int age;
    //     cin >> age;
    //     if(age < 18)
    //     {
    //         cout <<  "You are not eligible for vote" << endl;
    //         goto ineligible;
    //     }
    //     else
    //     {
    //         cout << "You are eligible for vote " << endl;
    //     }


 
    //return statement 
    int num1 = 15;
    int num2 = 4;
    
    int result = multiply(num1, num2);
    display(result);

    return 0;
}

 
   
        

    