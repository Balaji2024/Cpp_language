#include<iostream>
#include<string.h>
using namespace std;


// // array declaration, initialization, and access structure mamber

// struct student   //crate a student structure
// {
//     int id;
//     char name[20];
//     float marks;
// }; // no memory allocated at now

// int main()
// {
//     // Initialization 1st method
//     struct student s1 = {16,"Balaji",86.0};   //memory allocated

//     // Initialization 2nd method
//     struct student s2;  //memory allocated now
//     cout << "Enter student id for s2: " << endl;
//     cin >> s2.id;
//     cout << "Enter student name for s2: " << endl;
//     cin >> s2.name;
//     cout << "Enter student marks for s2: " << endl;
//     cin >> s2.marks;

//     // Initialization 3rd method
//     struct student s3;  //memory allocated now
//     s3.id = 1;
//     strcpy(s3.name,"madhu");
//     s3.marks = 98;

//     //accessing structure members
//     cout << endl << "Details of student 1" << endl;
//     cout << s1.id << endl;
//     cout << s1.name << endl;
//     cout << s1.marks << endl;
//     return 0;
// }


// Array of structure
// struct student   //crate a student structure
// {
//     int roll;
//     char name[20];
//     float marks;
// }; // no memory allocated at now

// // Create array of 5 students
// int main()
// {
//     struct student std[5];  //array of structure variables

//     for(int i = 0; i < 2; i++)
//     {
//         //taking values from user
//         cout << "Enter roll : " << endl;
//         cin >> std[i].roll;
//         cout << "Enter name : " << endl;
//         cin >> std[i].name;
//         cout << "Enter marks : " << endl;
//         cin >> std[i].marks;

//     }

//       for(int i = 0; i < 2; i++)
//     {
//         //print the values 
//         cout << "student " << i+1 << endl;

//         //accesing sturucture member
//         cout << "student roll : " << std[i].roll << endl;
        
//         cout << "student name : " << std[i].name << endl;
        
//         cout << "student marks : " << std[i].marks << endl;
        

//     }
// }

// local and global structure

// int main()
// {
//     struct student 
//     {
//         int id;
//         float salary;

//     };
//     student s1,s2;
//     return 0;
// }
// //outside main declared in function
// void demo()
// {
//     // outside main function structure element can't accessed
//     student s3,s4;
// }



//structure within structure

// struct student
// {
//     int roll;
//     float marks;
// };
// struct stud
// {
//     int rank;
//     student balaji;  //structure variable balaji as a member of structure stud
// };

// int main()
// {
//     stud madhu;
//     madhu.rank = 1;
//     madhu.balaji.roll = 16;
//     madhu.balaji.marks = 71;

//     cout << "Rank : " << madhu.rank << endl;
//     cout << "Roll : " << madhu.balaji.roll << endl;
//     cout << "Marks : " << madhu.balaji.marks << endl;

// }



// copying structure
// struct student   //crate a student structure
// {
//     int id;
//     char name[20];
//     float marks;
// }; // no memory allocated at now

// int main()
// {
//     student s1 = {16,"Balaji",86.0};   //memory allocated
//      student s2;

//     s2=s1;  //copying structure

//     //accessing structure members
//     cout << endl << "Details of student 2" << endl;
//     cout << s2.id << endl;
//     cout << s2.name << endl;
//     cout << s2.marks << endl;
//     return 0;
// }


//Passing structure to function 
//Two methods ----
//1-pass by value in structure --- we pass structure variable as an argument to a function 
//2-pass by reference in structue --- we pass address of structure variable to a function

//Pass by value in structure
// struct student   //crate a student structure
// {
//     int id;
//     char name[20];
//     float marks;
// }; // no memory allocated at now

// void demo(struct student s1)    //structure variable in function
// {
//     cout << endl << "Details of student 1" << endl;
//     cout << s1.id << endl;
//     cout << s1.name << endl;
//     cout << s1.marks << endl;
// }
// int main()
// {
//     demo(s1);   //function call with structure variable
//     struct student s1 = {16,"Balaji",86.0};   //memory allocated
//     return 0;
// }


//Pass by reference in structure
struct student   //crate a student structure
{
    int id;
    char name[20];
    float marks;
    
}; // no memory allocated at now

void demo(struct student *s1)    //structure pointer in function definition
{
    cout << endl << "Details of student 1" << endl;
    cout << s1->id << endl;
    cout << s1->name << endl;
    cout << s1->marks << endl;
}
int main()
{
    struct student s1 = {16,"Balaji",86.0};   //memory allocated
    demo(&s1);   //passing address of struct variable in function call
    return 0;
}
