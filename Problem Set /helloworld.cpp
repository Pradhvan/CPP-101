#include <iostream>
using namespace std;
int main(){
	int P;
	float R,SI;
	int T ;
	cout <<"Enter the values to calculate Simple intrest" <<endl;
	cout <<"Enter the Principle:"<<endl;
	cin >>P;
	cout << "Enter the Rate :"<<endl;
	cin >>R;
	cout << "Enter the Time :"<<endl;
	cin >>T;
	SI = (P*R*T)/100;
	cout << "The Simple intrest is :"<<endl<<SI<<endl;
}