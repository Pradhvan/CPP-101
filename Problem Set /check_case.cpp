#include <iostream>
using namespace std;
int main(){

	char a;
	cout<<"enter the character :"<<endl;
	cin>>a;

	if ((a>='a')&&(a<='z')){

		cout<<"The character is lower case"<<endl;
	}

	else if ((a>='A')&&(a<='Z')){
		cout<<"The character is in upper case"<<endl;
	}

	else {

		cout<<"It is a special character";
	}
}