# include <iostream>
using namespace std;

int main(){

    int n;

    cin>>n;

    int i=2;
    int p=n;
    int k=1;

    while(k<=n){
       
       if(p%i==0){ 
        p--;
       }
      
       else{
        cout<<p;
        p--;
       }   
       k++;
    }
}