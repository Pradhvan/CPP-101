#include <iostream>
using namespace std;

int main (){
	int j,i,n; 
	cin>>n;
	i=1;
	int val=1;
	while (i<=n){
		int j=1;
		val=j;
		while (j<=i){
			cout<<val;
			j++;
			val++;
		}
		cout<<endl;
		i++;
	}	
}