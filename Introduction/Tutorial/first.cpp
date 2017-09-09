#include <iostream>
using namespace std;
int main (){

    int x;

    //std will only work if we don't define the standard namespace function
    //std::cout<<"Using standard libaray";

    cout<<"hello world !"<<endl; //console output 
    cout<<"Enter a number"<<endl;
    cin>>x;

    cout<<"Your number "<<x<<endl;
    return 0;

}