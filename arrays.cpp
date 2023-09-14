#include<iostream>
using namespace std;


// 1-D Array
// int main()
// {
//     //array define by specifying size
//     int a[5];
//     // OR
//     int n = 5;
//     int b[n];

//     //array define by initialize elements
//     int c[]={10,20,30,40,50};       //it take size 5 (elements in array = size of array)

//     //array define by specifying size and initializing elements
//     int d[5]={10,20,30,40,50};

//     // 1D-array initializing and accessing
//     cout << "Elements in array access through index" <<endl;
//     for(int i = 0; i < 5; i++)
//     {
//         cout << "c[" << i << "]=" << c[i] <<endl;       //access through index 
//     }

//     //normal user access array through array index while internally compiler access array by address and pointers
//     cout << "Elements in array access through address internally" <<endl;
//     for(int i = 0; i < 5; i++)
//     {
//         cout << "c[" << &c[i] << "]=" << c[i] <<endl;       //access through index 
//     }

//     // additional facts about array 
    
//     //array index can't be negative or zero
//     //int e[-2]; //invalid
//     //int f[0];  //invalid

//     //unused space in the array is filled with zeros
//     int g[5]={10,20,30};
//     for (int i = 0; i < 5; i++)
//     {
//         cout << g[i] << endl;
//     }
    
//     //before initialization of array all elements gives garbage values
//     int h[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cout << h[i] << endl;
//     }

//     //declaring an array without size is invalid
//     //int j[];    //invalid
//     return 0;

// }





// 2-D Array
int main()
{
    //size of multidimensional array
    //int[3][3];      // can store total ( 3*3 ) = 9 elements

    //define 2-D array
    int a[3][3];

    //initialization of 2-D array
    //first way
    int b[3][3] = {0,1,2,3,4,5,6,7,8};

    //second way
    int c[3][3] = {{0,1,2},{3,4,5},{6,7,8}};    //each set of inner braces represented one row

    //Initializing and accessing 2-D arrays
    int d[3][3] = {{0,1,2},{3,4,5},{6,7,8}};    //array with 3 row and 3 column
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           // cout << "a[" << i << "][" << j << "] = ";
            cout << b[i][j] <<" " ;     //print matrix 2d array
        }
        cout<<endl;
        
    }
    // for(int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "b[" << i << "][" << j << "] = ";
    //         cout << b[i][j] << endl;
    //     }
        
    // }
    // for(int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "c[" << i << "][" << j << "] = ";
    //         cout << c[i][j] << endl;
    //     }
        
    // }
    // for(int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "d[" << i << "][" << j << "] = ";
    //         cout << d[i][j] << endl;
    //     }
        
    // }
    
    return 0;
}