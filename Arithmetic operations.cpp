#include<iostream>
using namespace std;
int main()
{
    int first, second, add, substract, multiply; float divide;
    cout<<"Enter two integers:";
    cin>>first>>second;
    
    add=first+second;
    substract=first-second;
    multiply=first*second;
    divide=first/(float)second;
    
    cout<<"sum="<<add<<endl;
    cout<<"difference="<<substract<<endl;
    cout<<"multiplication="<<multiply<<endl;
    cout<<"division="<<divide<<endl;
    return 0;
}
