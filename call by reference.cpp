#include<iostream>
using namespace std;
//Function to sap two values usinng cal by reference
void swap (int &a, int &b) {
  int temp=a;
  a=b;
  b=temp;
}
int main() {
  int x, y;
  
  cout<<"Enter the value of x:";
  cin>>x;
  cout<<"Enter the value of y:";
  cin>>y;
  
  cout<<"\n Before Swapping:";
  cout<<"x="<<x<<", y="<<y<<endl;
  swap(x,y);
  cout<<"\n After Swapping:";
  cout<<"x="<<x<<", y="<<y<<endl;
  
  return 0;
}