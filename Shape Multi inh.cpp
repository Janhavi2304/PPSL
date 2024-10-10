#include<iostream>
using namespace std;
class Shape{
  public:
  void shape(){
    cout<<"This is a shape"<<endl;
  }
};
class Polygon:public Shape{
  public:
  void polygon(){
    cout<<"Polygon is shape"<<endl;
  }
};
class Rectangle:public Polygon{
  public:
  void rectangle(){
    cout<<"Rectangle is polygon"<<endl;
  }
};
class Triangle:public Rectangle{
  public:
  void triangle(){
    cout<<"Triangle is polygon"<<endl;
  }
};
class Square:public Triangle{
  public:
  void square(){
    cout<<"Square is rectangle"<<endl;
  }
};
int main(){
  Square mySquare;
  mySquare.square();
  mySquare.triangle();
  mySquare.rectangle();
  mySquare.polygon();
  mySquare.shape();
  return 0;
}