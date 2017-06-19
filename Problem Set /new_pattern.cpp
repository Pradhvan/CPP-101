#include <iostream>
using namespace std;

int main (){

	int p,j,n;
	int i=1;
	int val = 1;
	cin>>n;
	p =1;
	while(i<=n){
		j=1;
		while (j<=i){
			cout<<val;
			j++;
			val++;
			if (j==2){
				p=val;
			}	
		}
		val=p;
		cout<<endl;
		i++;
	}

	}
