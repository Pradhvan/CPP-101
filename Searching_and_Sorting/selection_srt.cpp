#include <iostream>
using namespace std;

int main(){

    int n;

    cin>>n;

    int input[n];

    for (int i = 0; i<n;i++){
        cin>>input[i];
    }
	
	for (int i = 0; i<n-1;i++){
        for (int j = i+1; j<n; j++){
            //cout<<j<<" ";
        	if(input[i]>input[j])
			{
                int temp=input[j];
                input[j]=input[i];
                input[i]=temp;
			}
    	}//cout<<endl;
    }

    for (int i = 0; i<n;i++){
        cout<<input[i]<<" ";
    }cout<<endl;
}
