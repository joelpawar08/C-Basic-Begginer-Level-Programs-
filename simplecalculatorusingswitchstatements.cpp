#include <iostream>
using namespace std;
int main()
{
    cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << "Date: 21th-Sept-2022 Day: Wednesday \nTopic:- To Write a program to write a simple calculator using Switch Statement. " << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    int a, b;
    cout << "Enter the First Number" << endl;
    cin >> a;
    cout << "Enter the Second Number" << endl;
    cin >> b;
    char op;
    cout << "Enter a Operator" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a << op << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << op << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << op << b << " = " << a * b << endl;
        break;
    case '/':
        cout << a << op << b << " = " << a / b << endl;
        break;

    default:
    cout<<"Operator Not found "<<endl;
        break;
    }

    cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << "End of Program" << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    return 0;
}