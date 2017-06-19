#include <iostream>
using namespace std;
int main(){
	int n,x;
	cin>>x>>n;
	int p;
	p=x;
	int d=1;
	while(d<n){
		x=x*p;
		d++;
	}
cout<<x;

}