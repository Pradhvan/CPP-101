#include <iostream>
using namespace std;
int main(){

    int p,t;
    float r,si;


    cout<<"Enter the three values to calculate SI"<<endl;
    cin>>p>>r>>t;

    si=((p*r*t)/100);

    cout<<"The simple intrest is"<<si<<endl;

    return 0;
}