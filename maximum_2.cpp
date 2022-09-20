#include <iostream>
using namespace std;
int main()
{
    cout << "-------------------------------------------------------" << endl;

    cout << "Finding Maximum Between 2 Numbers using If & Else" << endl;
    cout<<"\n";
    cout<<"Date: 18th-Sept-2022 Day: Sunday"<<endl;

    cout << "--------------------------------------------------------" << endl;

    int num1;
    cout << "Enter Number 1\n";
    cin >> num1;
    cout << "You Entered Value for Number 1 is\n"
         << num1 << endl;

    int num2;
    cout << "Enter Number 2\n";
    cin >> num2;
    cout << "You Entered Value for Number 2 is\n"
         << num2 << endl;

    if (num1 > num2)
    {
        cout << "Number 1 is Bigger than Number 2\n";
    }
    else
    {
        cout << "Number 2 is Bigger than Number 1\n";
    }
    return 0;
}