// CalculatorSwitch.cc
// Simple arithmetic calculator using switch() selection.
// Initial version for WS 2015
// Only for teaching - no real project

#include <iostream>
using namespace std;

int main()
{
   float a, b, result;
   char operation;
 
   // Get numbers and mathematical operator from user input
   cout<< "Zahl eingeben:\n";
   cin >> a;
   cout<<"naechste Zahl:\n";
   cin >> b;
   cout<<"Operator:\n";
   cin >> operation;

   // Character constants are enclosed in single quotes
   switch(operation)
   {
   case '+':
         result = a + b;
         break;
   case '-':
         result=a-b;
         break;
   default:
         cout << "Invalid operation. Program terminated." << endl;
         return -1;
   }

   // Output result
   cout << result << endl;
   return 0;
}
