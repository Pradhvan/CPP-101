#include <iostream>
using namespace std;

int main(){

    int n,j;

    cin>>n;

    int a=0,b=1,c=1,i=1;

    while(i<=n){

        j=1;

        while(j<=i){

            cout<<a;
            a=b;
            b=c;
            c=a+b;
            j++;
        }
        i++;
        cout<<endl;
    }


}