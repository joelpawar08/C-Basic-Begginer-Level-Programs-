#include <iostream>
using namespace std;
int main(){
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
cout<<"Date: 21th-Sept-2022 Day: Wednesday \nTopic:- To Write a program to print all prime numbers in a given range "<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;

int a ;
int b;
cout<<"Enter First Number"<<endl;
cin>>a;
cout<<"Enter Second Number"<<endl;
cin>>b;
cout<<"The list of Prime Number is"<<endl;
for(int num =a ; num<=b; num++){
    int i;

    for(i=2; i<num;i++){
    if(num%i==0){
        break;

    }
    }
    if(num==i){
        cout<<num<<endl;
    }
}


      cout<<"--------------------------------------------------------------------------------------------"<<endl;
      cout<<"End of Program"<<endl;
       cout<<"--------------------------------------------------------------------------------------------"<<endl;
       return 0;


}