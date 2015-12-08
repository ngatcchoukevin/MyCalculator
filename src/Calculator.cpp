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
   cin >> a; //Erste werte eingeben
   cout<<"naechste Zahl:\n";
   cin >> b; // zweite Werte eingeben
   cout<<"Operator:\n";
   cin >> operation; // Der Operand wählen

   // Character constants are enclosed in single quotes
   switch(operation)
   {
   case '+':
         result = a + b; // Durchfuerung eine Addiktion
         break;
   case '-':
         result=a-b; // Durchfuerung eine Subtraktion
         break;
   case '*':
         result=a*b; // Durchfuerung eine  Multiplikation  
         break;
   case '/':
         result=a/b; // Durchfuerung eine Division
         break;
         
   default:
         cout << "Invalid operation. Program terminated." << endl;
         return -1;
   }

   // Output result
   cout <<a<<operation<<b<<"="<<result<< endl;
   return 0;
}
