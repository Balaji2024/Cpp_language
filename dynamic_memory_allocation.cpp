#include<iostream>
using namespace std;



/* program to demonstrate new and delete*/
// int main()
// {
//     int *ptr,n,i;
//     cout << "Enter the size";
//     cin >> n;

//     //memory alloacate using new operator
//     ptr = new int[n];   //allocates  n*sizeof(int)  bytes
//     if(ptr == NULL)
//     {
//         cout << "Memory allocation is failed" << endl;;
//         exit(1);
//     }
//     cout << "Enter the elements " << endl;
//     for (i = 0; i < n; i++)
//     {
//         cin >> *(ptr + i);  //initially pointer variable ptr contents of base address i.e  first byte of memory
//     }
//     cout << "Array elements are :" << endl;
//     for (i = 0; i < n; i++)
//     {
//         cout << *(ptr + i) << endl;;
//     }
    
//     return 0;
// }



// /* program to demonstrate new and delete*/

// int main()
// {
//     int *p;
//     float *q;
//     char *r;

//     p=new int(10);//allocates 2 bytes and the pass the address to p
//     q=new float(1.5);//allocates 4 bytes and the pass the address to q
//     r=new char('x');//allocates 1 bytes and the pass the address to r

//     cout<<"*p="<<*p<<" *q="<<*q<<" *r="<<*r<<endl;;
//     delete p;// release the memory allocated to p 
//     cout<<"*p="<<*p<<" *q="<<*q<<" *r="<<*r<<endl;;

// return 0;
// }



//new and delete keyword in c++
int main()
{
    int a = 11;
    int *ptr = &a;
    *ptr = 24;
    cout << "The value of a at address ptr is: " << *ptr << endl;

    int *ptr1 = new int(10);    //integar type memory initialize dynamically using new keyword
    float *ptr2 = new float(25.36);     //float type memory initialize dynamically using new keyword
    cout << "The value of ptr1 is: " << *ptr1 << endl;
    cout << "The value of ptr2 is: " << *ptr2 << endl;

    delete ptr1;        //dynamic memory is released using delete keyword

    cout << "The value of ptr1 is: " << *ptr1 << endl;      //it gives garbage value becoz memory is deallocated

    int *ptr3 = new int[3];
    ptr3[0] = 10;
    ptr3[1] = 20;
    ptr3[2] = 30;
    cout << "The value of ptr3[0] is: " << ptr3[0] << endl;
    cout << "The value of ptr3[1] is: " << ptr3[1] << endl;
    cout << "The value of ptr3[2] is: " << ptr3[2] << endl;

    delete[] ptr3;          //dynamic array memory is released using delete keyword
    //It gives empty array / garbage values 
    cout << "The value of ptr3[0] is: " << ptr3[0] << endl;
    cout << "The value of ptr3[1] is: " << ptr3[1] << endl;
    cout << "The value of ptr3[2] is: " << ptr3[2] << endl;

}