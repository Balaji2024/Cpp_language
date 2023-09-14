#include<iostream>
using namespace std;


// array of objects using pointer


class itemshop
{
    private:
        int id;
        float price;
    public:
        int setData(int p, int q)
        {
            id = p;
            price = q;
            return 0;
        }
        void getData()
        {
            cout << "The id of the item is: " << id << endl;
            cout << "The price of the item is " << price <<endl;
        }
            
};


int main()
{
    // array of objects using pointer
    int size = 2;
    // int *ptr = &size; //we saw this concept ptr variable store the address of size variable
    //but now
    // int *ptr = new ptr[20];   //it aalocate 20 integer memory dynamicallly using new keyword (20*4)=80 byte
    itemshop *ptr = new itemshop[size];
    itemshop *ptrtemp = ptr;
    int p,i;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Id and Price of the item: " << i+1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p,q);
        ptr->setData(p,q);      //access using arrow operator it is same as the upper line
        ptr++;
    }
    
    for ( i = 0; i < size; i++)
    {
        cout << "The item number in shop is: " << i+1 << endl;
        ptrtemp->getData();
        ptrtemp++;
    }
    















    // // &-ampersand sign(address of operator)
    // // also known as referencing operator(it is unary operator)
    // int a = 10;
    // cout << "Address value is :" << &a << endl;


    // // *-asterisk sign(Indirection operator)
    // // also known as dereferencing operator
    // int b = 100;
    // cout << "value of variable stored at address " << &b << " is " << (*(&b)) << endl;

    // //declaring and initializing pointer
    // int c = 10;      // declaration of normal variable
    // int *ptr;   // decalration of pointer
    // ptr = &c;   // initialization of pointer    

    // //program to demonstrate pointer and address
    // cout << "Value of c is : " << c << endl;
    // cout << "Address of c is : " << &c << endl;
    // //value of c at address &c by using * indirection operator
    // cout << "Value of *(&c) is : " << (*(&c)) << endl;  
    // cout << "value of ptr is (address of c variable) : " <<ptr << endl; //it store address of c
    // cout << "value of c is : " << *ptr << endl; //access through pointer indirection operator
    // cout << "Adddress of ptr is : " << &ptr << endl;   //address of ptr variable
    // cout << "Address of c is : " << *(&ptr) << endl; // points &ptr to variable c



    // // pointer to pointer 
    // int a = 25;
    // int *ptr = &a;          //normal pointer
    // int **ptr1 = &ptr;      //pointer to pointer

    // cout << a << endl;
    // cout << ptr << endl;
    // cout << ptr1 << endl;
    // cout << *ptr << endl;
    // cout << **ptr1 << endl;
    // cout << &a << endl;
    // cout << &ptr << endl;
    // cout << &(*ptr) << endl;
    // cout << &(**ptr1) << endl;


    //pointers in arrays
    // int a[5] = {1,2,3,4,5};
    // int *ptr;
    // cout << "Displaying address using arrays :"<< endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "&a[" << i << "] = " << &a[i] << endl;
    // }
    
    // ptr = a;        //assigning base address to pointer
    // cout << "Displaying address using pointers " << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "ptr[" << i << "]= " << ptr + i << endl;
    // }

    // int b[5] = {1,2,3,4,5};
    // int *ptr1[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     ptr1[i] = &b[i];
    // }
    // cout << "Values in arrays are :" << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *ptr1[i] << " ( " << &ptr1[i] << " )" << endl;
    // }
    
    
    
    
    
    
       // Special type of pointer
    // //Wild pointer in c++
    // int *p;     //declaration but no initialization
    // cout << *p << endl;  //junk
    // cout << p << endl;     //gives random memory access 

    // //Null pointer
    // int *q = NULL;
    // cout << "The value of pointer is : " << q <<endl;

    //Void pointer
    //     int a=10;
    // float b=1.5;
    // void *p=&b;//pointing to float variable address
    // void *c=&a;//invalid types c must be float pointer
    // cout<<"b value:"<<*(float *)p << endl;;
    // cout<<"a value:"<<*(int *)c;

    // //dangling pointer
    // int a = 10;
    // int *p=&a;//allocating memory
    // cout<<"*p = "<<*p<<endl;
    // cout<<"p = "<<p<<endl;
    // delete p;// adress in p is no more
    // cout<<"p value = "<<*p<<endl;//garbage value
    // cout<<"p address = "<<p<<endl;//garbage value
    // p = NULL;//point no where
    // cout<<"p value = "<<*p<<endl;

   
    return 0;
}