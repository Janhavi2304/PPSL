#include<iostream>
using namespace std;

//Base class Vehicle
class Vehicle {
  public:
  void vehicle()  {
    cout<<"I am a vehicle"<<endl;
  }
};
//Deriveed class twowheeler (inherites from vehicle)
class fourwheeler : public Vehicle {
  public:
  void fourWheeler()  {
    cout<<"I am a fourwheeler"<<endl;
  }
};
//Deriveed class bike (inherites from twowheeler)
class car : public fourwheeler {
  public:
  void Car()  {
    cout<<"I am a car"<<endl;
  }
};
int main()
{
  //create an object of class car
  car mycar;
  
  //call methods of bike, twowheeler, and vehicle through bike object
 
  mycar.Car();         // Calls the Bike method of bike class
 mycar.fourWheeler();   // Calls the twoWheeler method of twowheeler class
 mycar.vehicle(); 
  return 0;
}