#include<iostream>
using namespace std;


// // Example: define member function without argument within the class
// class parent
// {
//     int id;
//     string s;

//     public:
//         void set_p()
//         {
//             cout << "Enter parent id : " << endl;
//             cin >> id;
//             cout << "Enter parent name : " << endl;
//             cin >> s;
//         }
//         void display_p()
//         {
//             cout << id << "\t" << s << "\t";
//         }
// };
// class child : private parent
// {
//     float salary;
//     string company;

//     public:
//         void set_c()
//         {
//             set_p();
//             cout << "Enter salary :" <<endl;
//             cin >> salary;
//             cout << "Enter company name : " << endl;
//             cin >> company;
//         }
//         void display_c()
//         {
//             display_p();
//             cout << salary << "\t" <<company << endl;
//         }
// };
// int main()
// {
//     child c;
//     c.set_c();
//     c.display_c();
//     return 0;
// }




// // Example: define member function without argument outside the class
// class parent
// {
//     int id;
//     string s;

//     public:
//         void set_p();
//         void display_p();
// };
// void parent :: set_p()
//         {
//             cout << "Enter parent id : " << endl;
//             cin >> id;
//             cout << "Enter parent name : " << endl;
//             cin >> s;
//         }
// void parent :: display_p()
//         {
//             cout << id << "\t" << s << "\t";
//         }  

// class child : private parent
// {
//     float salary;
//     string company;

//     public:
//         void set_c();
//         void display_c();
// };
// void child :: set_c()
//         {
//             set_p();
//             cout << "Enter salary :" <<endl;
//             cin >> salary;
//             cout << "Enter company name : " << endl;
//             cin >> company;
//         }
// void child :: display_c()
//         {
//             display_p();
//             cout << salary << "\t" <<company << endl;
//         }        
// int main()
// {
//     child c;
//     c.set_c();
//     c.display_c();
//     return 0;
// }




// // Example: define member function with argument outside the class
// class parent
// {
//     int id;
//     string s;

//     public:
//         void set_p(int id, string name);
//         void display_p();
// };
// void parent :: set_p(int id, string s)
//         {
//             this->id = id;
//             this->s = s;
//         }
// void parent :: display_p()
//         {
//             cout << id << "\t" << s << "\t";
//         }  

// class child : private parent
// {
//     float salary;
//     string company;

//     public:
//         void set_c(int id, string s,float salary,string company);
//         void display_c();
// };
// void child :: set_c(int id, string s,float salary,string company)
//         {
//             set_p(id,s);
//             this->salary = salary;
//             this->company = company;
//         }
// void child :: display_c()
//         {
//             display_p();
//             cout << salary << "\t" <<company << endl;
//         }        
// int main()
// {
//     child c;
//     c.set_c(123,"bala",456,"madhu");
//     c.display_c();
//     return 0;
// }



// //c++ program to demonstrate implementation of inheritance

// //base class
// class parent 
// {
//     public:
//         int id_p;    
// };

// //sub class inhering from base class
// class child : public parent
// {
//     public:
//         int id_c;
// };
// //main function 
// int main()
// {
//     child c;
//     //An object of calss child have all data member and member function of class parent
//     c.id_c = 10;
//     c.id_p = 20;

//     cout << c.id_c << endl;
//     cout << c.id_p << endl;
//     return 0;
// }



//Types of inheritance 
// 1-Single inheritance.
// 2-Multi-level inheritance.
// 3-Multiple inheritance.
// 4-Hierarchical Inheritance.
// 5-Hybrid Inheritance.


//derived class-subclasss-child class
//base class-super class-parent class

// 1-Single inheritance.
//In single inheritance,one subclass is inherited by one base class only
//single inheritance in public mode
//if derivation is done in public mode then all the public and protected member of the parent class
//will have the same public and protected acces in the child class

// class parent        //parent class
// {
//     public:
//         void parent_p()
//         {
//             cout << "Parent class method " << endl;
//         }
//         int a = 10;   

// };

// class child : public parent     //derivation mode as public
// {
//     public:
//         void child_c()
//         {
//             cout <<  "Child class method " << endl;
//         }
//      //now it conatins 2 methods
// };
// int main()
// {
//     child c;
//     c.child_c();
//     c.parent_p();       //child object accessing parent method

//     parent p;
//     p.parent_p();
//     cout<< "parent class method value : " << p.a;
//     //p.child_p();        //class parent' has no member named 'child_p'

//     return 0;
// }   




// //Private Members cannot be accessed in Child class
// class parent        //parent class
// {
//     public:
//         void parent_p()
//         {
//             cout << "Parent class method " << endl;
//         }
//         int a = 10;   
//     private:
//         void parent_private()
//         {
//             cout << "parent private method " << endl;
//         }

// };

// class child : public parent     //derivation mode as public
// {
//     public:
//         void child_c()
//         {
//             cout <<  "Child class method " << endl;
//         }
//      //now it conatins 2 methods
// };
// int main()
// {
//     child c;
//     c.child_c();
//     c.parent_p();       //child object accessing parent method
//     //c.parent_private();     //Private Members cannot be accessed in Child class

//     parent p;
//     p.parent_p();
//     cout<< "parent class method value : " << p.a;
//     //p.child_p();        //class parent' has no member named 'child_p'
//     //p.parent_private();      //Private Members cannot be accessed in Child class


//     return 0;
// }   





//Access Modifiers in C++

//                             Public Derivation      	Private Derivation    	Protected Derivation
// Private members           	Not Inherited              	Not Inherited             Not Inherited              
// Protected members              Protected                   Private                    Protected                    
// Public members                	Public	                  Private                    Protected      



// If the class is inherited in public mode then its private members cannot be inherited in child class.
// If the class is inherited in public mode then its protected members are protected and can be accessed in child class.
// If the class is inherited in public mode then its public members are public and can be accessed inside child class and outside the class.
// If the class is inherited in private mode then its private members cannot be inherited in child class.
// If the class is inherited in private mode then its protected members are private and cannot be accessed in child class.
// If the class is inherited in private mode then its public members are private and cannot be accessed in child class.
// If the class is inherited in protected mode then its private members cannot be inherited in child class.
// If the class is inherited in protected mode then its protected members are protected and can be accessed in child class.
// If the class is inherited in protected mode then its public members are protected and can be accessed in child class.





// If the class is inherited in public mode then its private members cannot be inherited in child class.
// If the class is inherited in public mode then its public members are public and can be 
// accessed inside child class and outside the class
// If the class is inherited in public mode then its protected members are protected and can be accessed in child class.

// class A
// {
//     private:
//         int data1;
//     protected:
//         int data4;    
//     public:
//         int data2;
//         void setdata();
//         int getdata1();
//         int getdata2(); 
//         int getdata4();  
// };

// void A :: setdata()
// {
//     data1 = 10;
//     data2 = 20;
//     data4 = 30;
// }
// int A :: getdata1()
// {
//     return data1; 
// }
// int A :: getdata2()
// {
//     return data2; 
// }
// int A :: getdata4()
// {
//     return data4; 
// }
// class B : public A
// {
//     int data3;
//     public:
//         void process();
//         void display();
// };
// void B :: process()
// {
//     //cout << data1 << endl;      //private member can't be inherited in child class 
//     cout << data2 << endl;      //public members are public and can be accessed inside child class and outside the class
//     data3 = data2 * getdata1();     //private member of class can be accessed through public member function 
//     cout << data4 << endl;      //protected members are protected and can be accessed in child class.
// }
// void B :: display()
// {
//     cout << "Value of data 1 : " << getdata1() << endl;//private data member can be accessed through public function of inherited class A
//     cout << "Value of data 2 : " << data2 << endl;
//     cout << "Value of data 3 : " << data3 << endl;
//     cout << "Value of data 4 : " << data4 << endl;
// }
// int main()
// {
//     B b;
//     b.setdata();    //public members are public and can be accessed inside child class and outside the class
//     b.process();
//     b.display();
//     //b.data1;        //private member can't be inherited in child class and outside class 
//     //b.data4;        //protected members are protected and cannot be access outside the class.
//     b.data2;         //public members are public and can be accessed inside child class and outside the class

// }






// // If the class is inherited in private mode then its private members cannot be inherited in child class.
// // If the class is inherited in private mode then its protected members are private and cannot be accessed in outside the class but access inside child class
// // If the class is inherited in private mode then its public members are private and cannot be accessed in outside the class but access inside child class
// //

// class A
// {
//     private:
//         int data1;
//     protected:
//         int data4;    
//     public:
//         int data2;
//         void setdata();
//         int getdata1();
//         int getdata2(); 
//         int getdata4();  
// };

// void A :: setdata()
// {
//     data1 = 10;
//     data2 = 20;
//     data4 = 30;
// }
// int A :: getdata1()
// {
//     return data1; 
// }
// int A :: getdata2()
// {
//     return data2; 
// }
// int A :: getdata4()
// {
//     return data4; 
// }
// class B : private A
// {
//     int data3;
//     public:
//         void process();
//         void display();
// };
// void B :: process()
// {
//     setdata();
//     //cout << data1 << endl;      //private member can't be inherited in child class 
//     cout << data2 << endl;      //public members are private and cannot be accessed in outside the class but access inside child class
//     data3 = data2 * getdata1();     //getdata1() are public member of class can be access private data member inside child class through inheritance
//     cout << data4 << endl;      // protected members are private and cannot be accessed in outside the class but access inside child class.
// }
// void B :: display()
// {
//     cout << "Value of data 1 : " << getdata1() << endl;//private data member can be accessed through public function of inherited class A
//     cout << "Value of data 2 : " << data2 << endl;
//     cout << "Value of data 3 : " << data3 << endl;
//     cout << "Value of data 4 : " << data4 << endl;
// }
// int main()
// {
//     B b;
//     //b.setdata();    //public members are private and cannot be accessed in outside the class but access inside child class
//     b.process();
//     b.display();
//     //b.data1;        //private member can't be inherited in child class and outside class 
//     //b.data4;        //protected members are private and cannot be accessed in outside the class but access inside child class.
//     //b.data2;         //public members are private and cannot be accessed in outside the class but access inside child class
// }









// If the class is inherited in protected mode then its private members cannot be inherited in child class.
// If the class is inherited in protected mode then its protected members are protected and can be accessed in child class but cannot be accessed in outside the class
// If the class is inherited in protected mode then its public members are protected and can be accessed in child class but cannot be accessed in outside the class


// class A
// {
//     private:
//         int data1;
//     protected:
//         int data4;    
//     public:
//         int data2;
//         void setdata();
//         int getdata1();
//         int getdata2(); 
//         int getdata4();  
// };

// void A :: setdata()
// {
//     data1 = 10;
//     data2 = 20;
//     data4 = 30;
// }
// int A :: getdata1()
// {
//     return data1; 
// }
// int A :: getdata2()
// {
//     return data2; 
// }
// int A :: getdata4()
// {
//     return data4; 
// }
// class B : private A
// {
//     int data3;
//     public:
//         void process();
//         void display();
// };
// void B :: process()
// {
//     setdata();           //public members are protected and can be accessed in child class but cannot be accessed in outside the class
//     //cout << data1 << endl;      //private member can't be inherited in child class 
//     cout << data2 << endl;       //public members are protected and can be accessed in child class but cannot be accessed in outside the class
//     data3 = data2 * getdata1();     //getdata1 are public members are protected and can be accessed in child class through member function but cannot be accessed in outside the class
//     cout << data4 << endl;      //protected members are protected and can be accessed in child class but cannot be accessed in outside the class
// }
// void B :: display()
// {
//     cout << "Value of data 1 : " << getdata1() << endl;//private data member can be accessed through public function of inherited class A
//     cout << "Value of data 2 : " << data2 << endl;
//     cout << "Value of data 3 : " << data3 << endl;
//     cout << "Value of data 4 : " << data4 << endl;
// }
// int main()
// {
//     B b;
//     //b.setdata();    //public members are protected and can be accessed in child class but cannot be accessed in outside the class
//     b.process();
//     b.display();
//     //b.data1;        //private member can't be inherited in child class and outside class 
//     //b.data4;        //protected members are protected and can be accessed in child class but cannot be accessed in outside the class
//     //b.data2;         //public members are protected and can be accessed in child class but cannot be accessed in outside the class

// }












// // 2-Multi-level inheritance.
// //In MultiLevel Inheritance, a derived class is inherited from a base class, 
// //which in turn is derived from another base class.

// class grandparent           //level first grandparent
// {
//     public:
//         void grandparent_g()
//         {
//             cout << "Grandparent class method" << endl;
//         }
// };
// class parent : public grandparent       //level 2-inheriting grandparent to parent
// {
//     public:
//         void parent_p()
//         {
//             cout << "Parent class method" << endl;
//         }
//     //containss the properties of 2 classes  
// };
// class child :public parent          ////level 3-inheriting parent to child
// {
//     public:
//         void child_c()
//         {
//             cout << "child class method" << endl;
//         }
//     //containss the properties of 3 classes 
// };
// int main()
// {
//     child c;        //containss the properties of 3 classes- child, parent & grandparent
//     c.child_c();    //its own base class method
//     c.parent_p();    //derived from parent
//     c.grandparent_g();   //derived from grandparent

//     parent p;       //containss the properties of 2 classes- parent & grandparent
//     //p.child_c();        //class parent' has no member named 'child_c'
//     p.parent_p();       //derived from grandparent
//     p.grandparent_g();   //its own base class method

//     grandparent g;      //containss the properties of own class
//     //g.child_c();        //class grandparent' has no member named 'child_c'
//     //g.parent_p();       //class grandparent' has no member named 'parent_p'
//     g.grandparent_g();   //its own base class method

//     return 0;
// }





// //Another example of multi-level inheritance
// class student
// {
//     protected:
//         int roll_no;
//     public:
//         void set_roll(int r);
//         void get_roll();    
// };
// void student :: set_roll(int r)
// {
//     roll_no = r;
// }
// void student :: get_roll()
// {
//     cout << "The roll no is: " << roll_no << endl;
// }
// class exam : public student
// {
//     protected:
//         int physics;
//         int maths;
//     public:
//         void set_marks(float phy, float math);
//         void get_marks();
// };
// void exam :: set_marks(float phy, float math)
// {
//     physics = phy;
//     maths = math;
// }
// void exam :: get_marks()
// {
//     cout << "The marks obtained in physics are: " << physics << endl;
//     cout << "The marks obtained in maths are: " << maths << endl;
// }
// class result : public exam
// {
//     float percentage;
//     public:
//         void display_result();

// };
// void result :: display_result()
// {
//     get_roll();
//     get_marks();
//     cout << "Your result is " << (maths+physics)/2 <<endl;
// }
// int main()
// {
//     result r;
//     r.set_roll(16);
//     r.set_marks(98,96);
//     r.display_result();
// }





// 3-Multiple inheritance.
//In multiple inheritance, derived class have more than one base class at a time 

// class grandparent                            //Parent 1
// {
//     public:
//         void grandparent_g()
//         {
//             cout << "grandparent class method " << endl;
//         }
// };

// class parent                                 //Parent 2
// {
//     public:
//         void parent_p()
//         {
//             cout << "parent class method " << endl;
//         }
// };
// class child : public grandparent, public parent      //multiple parents grandparent & parent
// {
//     public:
//         void child_c()
//         {
//             cout << "child class method " << endl;
//         }
// };
// int main()
// {
//     child c;
//     c.grandparent_g();      //derived from grandparent
//     c.parent_p();           //derived from parent
//     c.child_c();            //Its own method
// }





// //Some times two class can have the same method name 
// //and If a child class inherits multiple classes in such case,
// //there is an ambiguity problem in naming 
// //ambiguity problem in multiple inheritance 


// class student
// {
//     public:
//         int roll_no;
//         void set_number(int roll)
//         {
//             roll_no = roll;
//         }  
//         void get_number()
//         {
//             cout << "Your roll number is: " << roll_no <<endl;
//         }  
// };
// class test : virtual public student
// {
//     public:
//         float maths,physics;
//         void set_marks(float math, float phy)
//         {
//             maths = math;
//             physics = phy;
//         }
//         void get_marks()
//         {
//             cout << "Your result is here : " << endl;
//             cout << "The marks of physics: " << maths << endl;
//             cout << "The marks of maths: " << physics <<endl;
//         }
// };
// class sports : virtual public student
// {
//     public:
//         float score;
//         void set_score(float sco)
//         {
//             score = sco;
//         }
//         void get_score()
//         {
//             cout << "The score of sports is: " << score << endl;
//         }
// };
// class result : public test, public sports
// {
//     public:
//     int total;
//         void display()
//         {
//             total = maths + physics + score;
//             get_number();
//             get_marks();
//             get_score();
//             cout << "Your total score is: " << total << endl;
//         }
// };
// int main()
// {
//     result bala;
//     bala.set_number(16);
//     bala.set_marks(96,95);
//     bala.set_score(9);
//     bala.display();

//     return 0;
// }







// // 4-Hierarchical Inheritance.
// //In hierarchical inheritance,a single parent class can be inherited several child classes 
// //i.e - more than one derived is created from single base class

// class parent 
// {
//     public:
//         void parent_p()
//         {
//             cout<<"parent class method " << endl;
//         }
//         int money = 25645;
// };
// class child1 : public parent        //child1 extended from parent
// {
//     public:
//         void child1_c()
//         {
//             cout<<"parent class method " << endl;
//         }
// };
// class child2 : public parent        //child2 extended from parent
// {
//    //child2 class can be empty
//   //Stiill it conatins one method and variable from parent
// };
// int main()
// {
//     child1 c1;
//     c1.child1_c();          //child1 own method
//     c1.parent_p();          //taken from parent
//     cout << c1.money << endl;       //inherited variable
//     child2 c2;
//     c2.parent_p();          //taken from same parent like child 1
//     cout << c2.money;          //inherited variable
// }





// // 5-Hybrid Inheritance.
//Hybrid inheritance is the combination of both multi-level and hierarchical inheritance
//This type of inheritance is also known as multipath inheritance
// class A
// {
//     public:
//         void A1()
//         {
//             cout << "This is A1 class method " << endl;
//         }
// };
// class B : public A      //B class inherits A as a parent
// {
//     public:
//         void B1()
//         {
//             cout << "This is B1 class method " << endl; //contain data of A + B
//         }
// };
// class C : public A      //C class inherits A as a parent
// {
//     public:
//         void C1()
//         {
//             cout << "This is C1 class method " << endl;
//         }
// };
// class D : public B      //multilevel inheritance A -> B -> D
// {
//     public:
//         void D1()
//         {
//             cout << "This is D1 class method " << endl;
//         }
// };
// class E : public C      //multilevel inheritance A -> C -> E
// {
//     public:
//         void E1()
//         {
//             cout << "This is E1 class method " << endl;
//         }
// };
// int main()
// {
//     E e;        //contains A C E properties
//     e.A1();
//     e.C1();
//     e.E1();

//     D d;        //contains A B D properties
//     d.A1();
//     d.B1();
//     d.D1();

// }
// Hierarchal Inheritance from A-B and A-C
// Class B contains 2 methods m1() from class A and m2() by its own
// Class C contains 2 methods m1() from class A and m3() by its own

// Multilevel inheritance from class A-B-D and A-C-E
// Class D contains 3 methods m1() from class A and m2() from class B and its own method m4()
// Class E contains 3 methods m1() from class A and m3() from class C and its own method m5()



// Constructors and Destructors in Inheritance:-

//constructors and destructors in multiple inheritance without arguments:
// Constructors and destructors in multiple inheritance with arguments:
// Constructors and Destructors in Single Inheritance without arguments
//Constructor and Destructors in Single Inheritance With Arguments:



// //constructors and destructors in multiple inheritance without arguments:
// class A
// {
//     public:
//         A()
//         {
//             cout << "constructor of class A " << endl;
//         }
//         ~A()
//         {
//             cout << "destructor of class A " << endl;
//         }
// };
// class B
// {
//     public:
//         B()
//         {
//             cout << "constructor of class B " << endl;
//         }
//         ~B()
//         {
//             cout << "destructor of class B " << endl;
//         }
// };
// class C: public A, public B
// {
//     public:
//         C()
//         {
//             cout << "constructor of class C " << endl;
//         }
//         ~C()
//         {
//             cout << "destructor of class C " << endl;
//         }
// };
// int main()
// {
//     C c;
//     cout << "Destructors are: " << endl;
// }





// // Constructors and destructors in multiple inheritance with arguments:
// class A
// {
//     public:
//         A(int x, int y)
//         {
//             cout << "sum of values passed to calss A : " << x+y << endl;
//         }
//         ~A()
//         {
//             cout << "destructor of class A " << endl;
//         }
// };
// class B
// {
//     public:
//         B(string a)
//         {
//             cout << "string passed to class B : " << a << endl;
//         }
//         ~B()
//         {
//             cout << "destructor of class B " << endl;
//         }
// };
// class C: public A, public B
// {
//     public:
//         C(int x, int y, string a, string b) : A(x,y), B(a)
//         {
//             cout << "value passed to class C : " << b << endl;
//         }
//         ~C()
//         {
//             cout << "destructor of class C " << endl;
//         }
// };
// int main()
// {
//     C c(11, 24, "Madhu", "Bala");
//     cout << "Destructors are: " << endl;
// }





// // Constructors and Destructors in Single Inheritance without arguments
// class A
// {
//     public:
//         A()
//         {
//             cout << "constructor of base class A " << endl;
//         }
//         ~A()
//         {
//             cout << "destructor of base class A " << endl;
//         }
// };
// class B : public A
// {
//     public:
//         B()
//         {
//             cout << "constructor of derived class B " << endl;
//         }
//         ~B()
//         {
//             cout << "destructor of derived class B " << endl;
//         }
// };
// int main()
// {
//     B b;
//     cout << "Destructor are : " << endl;
// }






// // Constructors and Destructors in Single Inheritance with arguments
// class A
// {
//     public:
//         A(int x, int y)
//         {
//             cout << "sum of values passed to the class A is : "<< x+y << endl;
//         }
//         ~A()
//         {
//             cout << "destructor of base class A " << endl;
//         }
// };
// class B : public A
// {
//     public:
//         B(int x, int y, string s) : A(x,y)
//         {
//             cout << "string passed to the class B : " << s << endl;
//         }
//         ~B()
//         {
//             cout << "destructor of derived class B " << endl;
//         }
// };
// int main()
// {
//     B b(11,24,"MadhuBala");
//     cout << "Destructor are : " << endl;
// }