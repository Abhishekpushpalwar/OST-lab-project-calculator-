#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char op;
    int a, b;

    cout << "Enter + for addition or - for subtraction: "<<endl;
    cout << "Enter * for multiplication or / for division: "<<endl;
    cout<< "Enter ^ for exponent or % for modulus: "<<endl;
   
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (op == '+')
        cout << "Result = " << a + b<<endl;
    else if (op == '-')
        cout << "Result = " << a - b<<endl;
    else if (op == '*')
        cout << "Result = " << a * b<<endl  ;
    else if (op == '/')
        cout << "Result = " << a / b<<endl;
    else if (op == '^')
        cout << "Result = " << pow(a, b)<<endl;
    else if (op == '%')
        cout << "Result = " << a % b<<endl;
     else
        cout << "Invalid operator";

    return 0;
}