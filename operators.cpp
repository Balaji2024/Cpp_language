#include<iostream>
using namespace std;

// operators in c++

int main()
{
    // //arithmetic operator 
    // int a,b;
    // cout << "arithemetic operator " << endl;
    // cin >> a >> b;  //initialize variable in one statement
    // //cin >> b;
    // cout << a+b << endl;    //addition
    // cout << a-b << endl;    //substrsction
    // cout << a*b << endl;    //multiplication
    // cout << a/b << endl;    //division
    // cout << a%b << endl;    //to remainder find
    
    // //relational operator
    // output gives in the form of true or false ---if true then 1 ,if false then 0
    // int c,d;
    // cout << "relational operator " << endl;
    // cin >> c >> d;
    // cout << (c>d) <<endl;
    // cout << (c<d) << endl;
    // cout << (c>=d) << endl;
    // cout << (c<=d) << endl;
    // cout << (c==d) << endl;
    // cout << (c!=d) << endl;

    // //Logical operator
    // output gives in the form of true or false ---if true then 1 ,if false then 0
    // int e,f;
    // cin >> e >> f;
    // cout << (e>f && e>=f) << endl;
    // cout << (e<f && e>=f) << endl;
    // cout << (e>f || e>=f) << endl;
    // cout << (e<f || e>=f) << endl;
    // cout << (!(e>f)) << endl;
    // cout << (!(e<f)) << endl;

    // //Bitwise operator
    // // in this type numer convert into binary form then perform operations and convert binary to decimal and gives output
    // int g,h;
    // cin >> g >> h;
    // cout << (g & h) << endl;
    // cout << (g | h) << endl;
    // cout << (g >> 2) << endl;
    // cout << (h << 2) << endl;
    // cout << ( ~ h) << endl;
    // cout << (g ^ h) << endl;

    // //Assignment operator
    // int i,j;
    // cin >> i >> j;
    // cout << (i=j) << endl;
    // cout << (i+=j) << endl;
    // cout << (i-=j) << endl;
    // cout << (i*=j) << endl;
    // cout << (i/=j) << endl;
    // cout << (i%=j) << endl;
    // cout << (i&=j) << endl;
    // cout << (i^=j) << endl;
    // cout << (i|=j) << endl;
    // cout << (i<<=j) << endl;
    // cout << (i>>=j) << endl;

    // //unary operator
    // int k;
    // cin >> k;
    // cout << k++ << endl;
    // cout << k-- << endl;
    // cout << ++k << endl;
    // cout << --k << endl;

    // // Ternary operator
    // int l,m,n,o,p,q;
    // cin >> l >> m >> n >> o >> p;
    // q=(l>m)?l:m;
    // cout << q << endl;

    //comma operator
    int r,s,t;
    cin >> r >> s;
    t = (r+=2, s+=r, s+r);  // first evaluted and upadate then second evaluated and update and third evalute and print
    cout << t;



    return 0;
}