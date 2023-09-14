#include <iostream>
using namespace std;

int main()
{
    // while loop
    // printf 10 natural number
    //  int a = 1;
    //  while(a<=10)
    //  {
    //      cout << a << endl;
    //      a++;
    //  }

    // Infinite while loop
    // when,
    // when we don't increment / decrement variable
    // condition is always true
    //  int a = 1;
    // while(a<=10) //condtion always true because here increment / decrement not available
    // {
    //     cout << a << endl;

    // }


    // //Inapproprite use of semicolon after while loop
    //  int a = 1;
    // while(a<=10);    //when wee take semicolon after while loop it doesn't show any value on output screen 
    //                 // it shows blank(empty) screen on terminal.....
    // {
    //     cout << a << endl;
    //     a++;
    // }


    // do-while loop
    // exit control loop---so execute loop atleast once and check condtion
            // if condition are true then execute loop again
    // int a = 1;
    // do
    // {
    //     cout << a << endl;
    //     a++;  // when we can't take proper increment/decrement or proper condition then this is infinite loop

    // } while (a<=10);
    


    // For loop 
    //
    //  int i, a;
    //  cin >> a;
    // for(i=1; i <= 10; i++)
    // {        
       
    //     cout << a <<" * " << i << " = " << a*i << endl;
    // }

    // //Infinite for loop
    // int a;
    //  cin >> a;
    // for(;;)
    // {        
       
    //     cout << a << endl;
    //     a++;
    // }


    //for-each loop
    //introduced by c++ developer in c++11
    // int arr[] = {10,20,30,40,50,60};
    // for(int x : arr)
    // {
    //     cout << x << endl;
    // }


    //Nesting of loops
    //for loop
    // for(int i = 1; i <= 5; i++)
    // {
    //     cout << "Table of " << i << " :";
    //     for(int j = 1; j <= 10; j++)
    //     {
    //         cout << i*j << " ";
    //     }
    //     cout << endl;
    // }

    // while loop
    // int a=2;
    // while(a<=2)
    // {
    //     int b=1;
    //     while(b<=10)
    //     {
    //         cout << a*b << endl;
    //         b++;
    //     }
    //     a++;
    // }

    //do-while loop
    // int a,b;
    // do
    // {
    //     a = 2;
    //     b = 1;
    //     do
    //     {
            
    //         cout << a*b << endl;;
    //         b++;
    //     } while(b<=10);
    //     a++;
    // } while(a<2);

    //for and while loop use in example
    // for(int i = 1;i <= 5; i++ )
    // {
    //     cout << "Table of " << i << " :";
    //     int j = 1;
    //     while(j<=10)
    //     {
    //         cout << i*j << " ";
    //         j++;
    //     }
    //     cout << endl;
    // }
    
    return 0;
}