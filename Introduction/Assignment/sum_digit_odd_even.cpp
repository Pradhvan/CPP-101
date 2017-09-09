# include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int count = 0;
    int p,k;

     k = n;

    while(!n==0){

        p=n%10;
        n=n/10;
        count = count +1 ;    
    }

    n=k;

    int sum_e=0,sum_o=0;

    while(!n==0){

        p=n%10;
        n=n/10;

        if(count%2==0){
            sum_e=sum_e+p;
            count--;
        }

        else{
            sum_o=sum_o+p;
            count--;
        }
    }
    cout<<sum_o<<endl; //sum of odd digits
    cout<<sum_e<<endl; //sum of even digits 

}