// Alphanzo Moore
// CIS-5 Online
// November 5, 2023
// Tutorial 12B: Arrays of Structs

#include <iostream>
#include "Person.h"
using namespace std;

int main() 
{
  Person CISS[3];

  for (int i = 0; i < 3; i++)
    {
      cout << "Student Number " << i + 1 << endl;
      cout << "Name: ";
      cin >> CISS[i].name;
      cout << "Age: ";
      cin >> CISS[i].age;
      cout << "Height: ";
      cin >> CISS[i].height;
      cout << "Eye Color: ";
      cin >> CISS[i].eyecolor;
      cout << endl;
      
    }
  
  for (int i = 0; i < 3; i++)
    {

      cout << "Student # " << i + 1 << CISS[i].name << ", age = "<< CISS[i].age << ", your height = "<< CISS[i].height << ", your eye color = " << CISS[i].eyecolor << endl;


      
    }
  
  
  return 0;
}