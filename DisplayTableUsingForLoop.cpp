#include <iostream>
using namespace std;
int main(){
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
cout<<"Date: 20th-Sept-2022 Day: Tuesday \nDisplay Table Using For Loop. "<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;

int n;
cout<<"Enter The Number to Get It's Table: "<<endl;
cin>>n;
cout<<"Here is the Table of "<<n<<":"<<endl;
for(int i = 1; i<=12; ++i){
    cout<<n<< " x "<<i<<" = "<<n*i<<endl;
}
    

      cout<<"--------------------------------------------------------------------------------------------"<<endl;
      cout<<"End of Program"<<endl;
       cout<<"--------------------------------------------------------------------------------------------"<<endl;

}