#include <iostream>
using namespace std;
int main()
{
    cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << "Date: 21th-Sept-2022 Day: Wednesday \nTopic:- To Write a program to write a simple calculator using Switch Statement. " << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    char v;
    
    cout << "Enter a Alphabet" << endl;
    cin >> v;
    switch (v)
    {
    case 'a' :
        cout << "The Entered Alphabet is a Vowel" << endl;
        break;
    case 'e':
        cout << "The Entered Alphabet is a Vowel" << endl;
        break;
    case 'i':
        cout << "The Entered Alphabet is a Vowel" << endl;
        break;
    case 'o':
        cout << "The Entered Alphabet is a Vowel" << endl;
        break;
    case 'u':
        cout << "The Entered Alphabet is a Vowel" << endl;
        break;

    default:
    cout<<"The Entered Alphabet is a Consonant"<<endl;
        break;
       
    }

    cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << "End of Program" << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    

    return 0;
}