#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter a number:";
    cin>>number;
    
    if(number>=0)
    {
        cout<<"the number" <<number<< "is positive.\n";
    }
    else
    {
       cout<<"the number" <<number<< "is negative.\n"; 
    }
    return 0;
}
