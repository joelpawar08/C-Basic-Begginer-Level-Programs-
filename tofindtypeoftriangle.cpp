#include <iostream>
using namespace std;
int main(){
     cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;

    cout << "Program to check if a triangle is scalene, isosceles or equilateral." << endl;
    cout<<"\n";
    cout<<"Date: 18th-Sept-2022 Day: Sunday"<<endl;

    cout << "-----------------------------------------------------------------------------------------------------------------------------" << endl;


    int sidea,sideb,sidec;
    cout<<"Enter Side a "<<endl;
    cin>>sidea;
    cout<<"Enter Side b "<<endl;
    cin>>sideb;
    cout<<"Enter Side c "<<endl;
    cin>>sidec;

    if(sidea == sideb && sideb==sidec){
        cout<<"Trinangle is a Equilateral Triangle"<<endl;

    }
    else if (sidea == sideb || sideb == sidec || sidea == sidec){
        cout<<"Trinangle is a Isosceles Triangle"<<endl;


    }
    else {
       cout<<"Trinangle is a Scalene Triangle"<<endl;
    }


 

    cout << "***********************************************End of Program*********************************************** " << endl;

    

return 0;
}