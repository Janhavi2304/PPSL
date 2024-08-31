#include <iostream>
#include <string>
using namespace std;
int main() {
string str = "Sanjivani";

// Concatenation
string greeting = str + " University";
cout << "Concatenation: " << greeting << endl;

// Substring
string part = greeting.substr(10, 11); 
cout << "Substring: " << part << endl;

// Find
size_t pos = greeting.find("University");
cout << "Find: 'University' found at position " << pos << endl;

// Replace
string replaced = greeting;
replaced.replace(pos, 10, "College");
cout << "Replace: " << replaced << endl;

// Insert
string inserted = greeting;
inserted.insert(9, " Engineering");
cout << "Insert: " << inserted << endl;

// Erase
string erased = greeting;
erased.erase(9, 11); 
cout << "Erase: " << erased << endl;

// To uppercase
string uppercase = greeting;
for (char &c : uppercase) c = toupper(c);
cout << "To Uppercase: " << uppercase << endl;

// To lowercase
string lowercase = greeting;
for (char &c : lowercase) c = tolower(c);
cout << "To Lowercase: " << lowercase << endl;

return 0;
}
