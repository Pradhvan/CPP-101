# include <iostream>
using namespace std;

int main(){

    int n,i=1;
    int a=0,b=1,c=1;

    cin>>n;
    
    while(i<=n){   
        cout<<a<<endl;
        a=b;
        b=c;
        c=a+b;
        i++;
    }
}