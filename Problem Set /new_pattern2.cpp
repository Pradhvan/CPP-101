#include <iostream>
using namespace std;

int main (){
	int i,j,k;
	int n;
	cin>>n;
	i=1;
	int val=1;
	while (i<=n){
		j=1;
		k=1;
		while(k<=n-i){
			cout<<" ";
			k++;
		}
		while (j<=i){
			cout<<val;
			val++;
			j++;
		}
		cout<<endl;
		i++;
	}
}