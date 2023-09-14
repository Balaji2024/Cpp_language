// #include<iostream>
// using namespace std;

// //Abstraction - means only showing the necessary details to the user 
// //and hiding the unwanted details in the background
// //abstraction can be acheived through abstract class and interface
// //data abstraction can be acheived in two ways
// //1-abstraction using classes 

// class sum
// {
//     private:
//         int a,b,c;  //private variables
//     public:
//         void add()
//         {
//            cout << "Enter two numbers : " << endl;
//            cin >> a >> b;
//            c = a + b;
//            cout<< c;
//         }
// };

// int main()
// {
//     sum s1;
//     s1.add();

//     return 0;    
// }


//2- Abstraction in header files
// program to calculate the power of a number
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a = 4;
    int b = 3;
    int result;
    result = pow(a,b);
    cout << "Cube of a is : " << result << endl;
}