#include <iostream>
using namespace std;
int main()
{
    cout << "-------------------------------------------------------" << endl;

    cout << "Finding If the Number is Even or Odd" << endl;
    cout<<"\n";
    cout<<"Date: 18th-Sept-2022 Day: Sunday"<<endl;

    cout << "--------------------------------------------------------" << endl;

    int n;
    cout << "Enter Number:" << endl;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "The Number is Even" << endl;
    }
    else
    {
        cout << "The Number is Odd" << endl;
    }
    return 0;
}