#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter the number "<<endl;
    cin>>n;

    int i=2;

    int count = 0;

    while(i<n){

        if(n%i==0){

            cout<<"The number is non prime" ;
            break;
        }

        i++;
    }

    if(i>=n){

        cout<<"The number is prime"<<endl;

    }

    
}