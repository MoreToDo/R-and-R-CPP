// 01 Using Visual Studio.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> // Input - Output library
using namespace std; // Creates std code for all lines of C++ coding

int main()
{
 /*  
 cout (this is console output text)
 cin  (this is console input text)
 */


   cout << "Hey this is your first GitHub tutorial" << endl; 
   int age;
   cout << "How old are you? ";
   cin >> age;
   cout << "You are " << age << " years old" << endl;
 
 float money;

 cout << "How much money do your have? ";
 cin >> money;
 cout << "You have $" << money << " on you!" << endl;

   system("pause");
    return 0;
}

