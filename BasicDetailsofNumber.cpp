#include <iostream>
using namespace std;
int main(){
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
cout<<"Date: 20th-Sept-2022 Day: Tuesday \nTo Find The Basic Details of the Number. "<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;

int n;
cout<<"Enter a Number"<<endl;
cin>>n;

cout<<"The Number Entered by you Was "<<n<<endl;

cout<<"----------Even and Odd Check----------"<<endl;
if(n%2==0){
    cout<<"The given Number is Even"<<endl;

}
else{
    cout<<"The Number is Odd"<<endl;
}

cout<<"----------Square Root ----------"<<endl;
int sqre = n*n;
cout<<"Squareroot is: "<<sqre<<endl;



cout<<"----------Cube Root----------"<<endl;
sqre = n*n;
int cub = n*sqre;

cout<<"Cuberoot is: "<<cub<<endl;


      cout<<"--------------------------------------------------------------------------------------------"<<endl;
      cout<<"End of Program"<<endl;
       cout<<"--------------------------------------------------------------------------------------------"<<endl;

}