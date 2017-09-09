#include <iostream>
using namespace std;

int main(){

    int n;

    int i = 1,k = 1;

    cin>>n;

    while(i<=n){

       // cout <<" ";

        int j=1;

        while (j<=i){

            cout<<k;
            j++;
            k++;
        }

        cout<<endl;

        i++;
    }

}