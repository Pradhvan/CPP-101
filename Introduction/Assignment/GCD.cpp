// FIX THE ISSUE WITH THE GCD 

# include <iostream>
using namespace std;

int main(){

    int num1,num2;
    cin>>num1>>num2;

    int max;
    int i = 2;
    int p,q;
    
    if(num1>num2){
        max=num1;
    }
    else{
        max=num2;
    }

    int k=2;

    while(k<max){

        if(num1%i==0){
            p=i;
        }

        if(num2%i==0){
            q=i;
        }

        if(p==q){
            cout<<p;
        }
        k++;
        i++;
    }

}