#include <iostream>
using namespace std;
int main(){
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
cout<<"Date: 20th-Sept-2022 Day: Tuesday \nProgram to find sum of natural numbers till n. "<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;


 
int number;
int sum = 0;

cout << "Enter a number: ";
cin >> number;

while (number >= 0) {

sum = sum+number;

cout << "Enter a number: ";
cin >> number;
}

cout << "\nThe sum is " << sum << endl;

return 0;

cout << "\nThe sum is " << sum << endl;

      cout<<"--------------------------------------------------------------------------------------------"<<endl;
      cout<<"End of Program"<<endl;
       cout<<"--------------------------------------------------------------------------------------------"<<endl;

}