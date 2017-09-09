#include <iostream>
using namespace std;
int main(){
    int num1;
    
    cout<<"Enter the number"<<endl;
    cin>>num1;
    
    if(num1 == 0){
        cout<<"Zero is entered";
    }

    if(num1%2==0){
        cout<<"The number is even"<<endl;
    }

    else {
        cout<<"The number is odd"<<endl;
    }

    //cout<<"The sum is "<<sum<<endl;

}