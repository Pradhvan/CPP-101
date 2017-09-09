#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1,j=0;

    int k=1;
    while(i<=n){
        j=0;
        while(j<i){
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }


}