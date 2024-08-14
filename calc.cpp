#include <iostream>
using namespace std;

int main()
{
    char op;
    float n1, n2;

    cout << "Enter the operator you want the calculator to execute";
    cin >> op;

    cout << "Enter two numbers";
    cin >> n1 >> n2;

    switch (op)
    {
    // to add 2 numbers
    case '+':
        cout << n1 + n2;
        break;

    // to subtract 2 numbers
    case '-':
        cout << n1 - n2;
        break;

    // to multiply 2 numbers
    case '*':
        cout << n1 * n2;
        break;

    // to divide 2 numbers
    case '/':
        cout << n1 / n2;
        break;

    default:
        cout << "Error! Invalid operator";
    }

    return 0;
}
