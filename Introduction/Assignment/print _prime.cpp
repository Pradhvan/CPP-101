# include <iostream>
using namespace std;

int main(){

    int n;

    cin>>n;

    int i=2;
    int p=1;
    int k=1;

    while(k<=n){
       
       if(k==2){
        p=2;
        cout<<p;
        p++;
        k++;
        continue;
       }
       if(p%i==0){ 
        p++;
       }
      
       else{
        cout<<p;
        p++;
       }   
       k++;
    }
}