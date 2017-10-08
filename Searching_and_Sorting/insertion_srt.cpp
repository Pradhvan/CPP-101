#include <iostream>
using namespace std;

int main(){

    int n;

    cin>>n;

    int input[n];

    for (int i = 0; i<n;i++){
        cin>>input[i];
    }
	
	for (int i = 1; i<n;i++){
		int j=i;
		while(j>0 && input[j]<input[j-1])
		{
			int temp=input[j];
            input[j]=input[j-1];
            input[j-1]=temp;
			j--;
		}
		for (int x = 0; x<n;x++)cout<<input[x]<<" ";cout<<endl;
    }

    for (int i = 0; i<n;i++){
        cout<<input[i]<<" ";
    }cout<<endl;
}
