#include <iostream>
using namespace std;

int main(){

    int n;

    cin>>n;

    int input[n];

    for (int i = 0; i<n;i++){
        cin>>input[i];
    }
	
	for (int i = 0; i<n;i++){
        for (int j = 0; j<n-i-1; j++){
            //cout<<j<<" ";
        	if(input[j]>input[j+1])
			{
                int temp=input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
			}
    	}//cout<<endl;
    }

    for (int i = 0; i<n;i++){
        cout<<input[i]<<" ";
    }cout<<endl;
}
