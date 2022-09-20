#include <iostream>

using namespace std;
int main(){
      cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;

    cout << "Program to check if an alphabet is a vowel or a consonant. " << endl;
    cout<<"\n";
    cout<<"Date: 18th-Sept-2022 Day: Sunday"<<endl;

    cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;
char c;

int isLowercaseVowel, isUppercaseVowel;

cout << "Enter an alphabet: ";
cin >> c;

isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

if (isLowercaseVowel || isUppercaseVowel)
cout << c << " is a vowel."<<endl;
else
cout << c << " is a consonant."<<endl;


    cout << "***********************************************End of Program*********************************************** " << endl;

return 0;
}
