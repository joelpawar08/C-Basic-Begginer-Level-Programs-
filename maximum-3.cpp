#include <iostream>
using namespace std;
int main()
{
    cout << "-------------------------------------------------------" << endl;

    cout << "Finding Maximum Between 3 Numbers using Nested If & Else" << endl;
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

    int num3;
    cout << "Enter Number 3\n";
    cin >> num3;
    cout << "You Entered Value for Number 3 is\n"
         << num3 << endl;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "Number 1:" << num1 << " is Greater \n " << endl;
        }
        else
        {
            cout << "Number 3:" << num3 << " is Greater \n " << endl;
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << "Number 2:" << num2 << " Is Greater" << endl;
        }
        else
        {
            cout << "Number 3:" << num3 << " Is Greater" << endl;
        }
    }
    return 0;
}