#include <iostream>
using namespace std;
int main (){
	int n,k,d;
	cin>>n;
	d =1;
	char alpha = 'A';
	while(d<=n){
		k=1;
		while(k<=d){
			cout<<alpha;
			k++;
		}
		alpha++;
		d++;
		cout<<endl;
	}
}