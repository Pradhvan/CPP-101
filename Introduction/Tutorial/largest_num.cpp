#include <iostream>
using namespace std;

int main(){

    int num1,num2,num3;

    cout<<"Enter the three numbers"<<endl;
    cin>>num1>>num2>>num3;

    int max_num;

    if(num1>num2){
        num1 = max_num;
    }

    else {

        num2 = max_num;
    }

    if(max_num > num3){

        max_num = num3;
    }

    cout << "The max number is "<<max_num<<endl;

    return 0;
}