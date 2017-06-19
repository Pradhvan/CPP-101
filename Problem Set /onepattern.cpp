#include <iostream>
using namespace std;
int main(){
	int n,k,d;
	cin>>n;
	d=1;
	while(d<=n){
		k=1;
		while (k<=d){
			cout<<"1";
			k++;
		}
		cout<<endl;
		d++;
	}
}