#include <iostream>
using namespace std;

void calc (double _x, double _y); // CHANGED
double result;
double n1,n2;
double x,y; // CHANGED
char q,operation;

int main()
  {
    cout<<"Welcome to My Calculator" <<endl;
    cout<<""<<endl;
    cout<<"INSTRUCTIONS: Input a mathmatical equation" <<endl;
    cout<<"              EX: 2 + 2" <<endl;
    cout<<""<<endl;
    cout<<"Operators:"<<endl;
    cout<<"For Addition, select '+'"<<endl;
    cout<<"For Subtraction, select '-'"<<endl;
    cout<<"For Multiplication, select '*'"<<endl;
    cout<<"For Division, select '/'"<<endl;
    cout<<""<<endl;
    cout<<"To clear, select 'c'"<<endl;
    cout<<"To quit, select 'q'"<<endl;
    cout<<""<<endl;
    cout<<"Input a mathmatical equation"<<endl;
    cin>>n1>>operation>>n2;
    calc(n1,n2); // CHANGED
    cout<<"The answer is:"<<result<<endl;
    std::cin>>q;
    return 0;
 }

void calc(double _x, double _y) // CHANGED
    {
    x=_x; // CHANGED
    y=_y; // CHANGED
    switch(operation)
    {case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        result = x / y;
        break;
    default:
        cout<<"Improper equation. Please input a valid mathmatical equation"<<endl;
        cin>>x>>operation>>y; // CHANGED
        calc (x,y); // CHANGED
    }
}
