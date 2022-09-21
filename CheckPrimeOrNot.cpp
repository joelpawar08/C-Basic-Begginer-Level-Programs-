#include <iostream>
using namespace std;
int main(){
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
cout<<"Date: 21th-Sept-2022 Day: Wednesday \nTopic:- To Check if the entered Number is Prime or Non Prime  "<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;

int n;
cout<<"Enter a Number"<<endl;
cin>>n;
int i;
for(i=2; i<n; i++){
    if(n%i==0){
        cout<<"The Entered Number is Not Prime"<<endl;
        break;
    }
}
if(n==i){
    cout<<"The Number is Prime"<<endl;
}


      cout<<"--------------------------------------------------------------------------------------------"<<endl;
      cout<<"End of Program"<<endl;
       cout<<"--------------------------------------------------------------------------------------------"<<endl;

}