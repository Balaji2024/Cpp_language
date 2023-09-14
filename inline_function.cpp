#include<iostream>
using namespace std;

int product(int a, int b, int c)
{
    return a*b*c;
}
int main()
{
    int a,b,c;
    cout << "Enter values : " << endl;
    cin >> a >> b >> c;
    cout << "The product is : "<<product(a,b,c);
    return 0;
}