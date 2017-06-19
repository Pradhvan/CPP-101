#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int basic,allow,ne;
	char grade ;
	float hra,sal,da,pf;
	cin>>basic>>grade;
	if (grade == 'A'){
		allow = 1700;
	}
	else if (grade == 'B'){
		allow = 1500;

	}
	else{
		allow = 1300;
	}

	hra = (0.2 * basic );
	da = (0.5* basic);
	pf = (0.11 * basic);

	sal = basic + hra + da + allow -pf ;
	ne = round(sal)
	cout << ne ;
}