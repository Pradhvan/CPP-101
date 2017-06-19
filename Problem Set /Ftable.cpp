# include <iostream>
using namespace std ;
int main (){
	int c,f1,f2,w;
	cin>>f1>>f2>>w;
	while(f1<=f2){
		c=(5.0/9)*(f1-32);
		cout<<f1<<'\t'<<c<<endl;
		f1=f1+w;

	}

}