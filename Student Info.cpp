#include <iostream>
#include <string>
using namespace std;
class Student {
public:

string name;
int rollNumber;
int age;
// Function to display student information
void displayInfo() {
cout << "Name: " << name << endl;
cout << "Roll Number: " << rollNumber << endl;
cout << "Age: " << age << endl;
}
};
int main() {
Student s1;
Student s2;
s1.name = "Alice";
s1.rollNumber = 101;
s1.age = 20;

s2.name = "Bob";
s2.rollNumber = 102;
s2.age = 22;

// Display information for each student
cout << "S1 Information:" << endl;
s1.displayInfo();
cout << endl; 
cout << "S2 Information:" << endl;
s2.displayInfo();
return 0;
}