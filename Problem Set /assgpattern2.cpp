#include <iostream>
using namespace std;
int main(){
	int n,i,k,j,d;
	cin>>n;
	cout<<"1";
	cout<<"11";
	i =3;
	int p =3;
	while (i<=n){
		j=1;
		while(j<=i){
			k=i--;
			cout<<k;
			if(j<=3){
				while(p<=i){
					cout<<"0";
					p++;
				}
			}
			j++;
		}
		cout<<k;
		i++;
		cout<<endl;	
	}
}