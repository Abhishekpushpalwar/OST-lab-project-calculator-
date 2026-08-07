#include <iostream>
using namespace std;

int main() {
    char op;
    int a, b;

    cout << "Enter + for addition or - for subtraction: ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (op == '+')
        cout << "Result = " << a + b;
    else if (op == '-')
        cout << "Result = " << a - b;
    else
        cout << "Invalid operator";

    return 0;
}