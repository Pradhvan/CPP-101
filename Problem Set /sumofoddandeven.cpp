#include<iostream>
using namespace std;

int main() {
	int count,p,sum1,sum2,di,num;
	cin>>num;
	int d=1;
	sum1 = 0;
	sum2=0;
	int number;
	number=num;
	count = 0;

	while (num>0){  //Checks the length of the integer 
	    num=num/10;
	    count++;
	}

	num=number;	
	
	cout<<number;
	while(d<=count){
  
		di=number%10;				//take in the last digt
		cout<<di;

		if (di/2 == 0){ 			//checks the last digit
			 sum1 = sum1 + di;
		}
		else {
			sum2=sum2+ di ;
		}
		number=number/10;          //Updates the number
		d++;
	}
	cout<<sum1<<" "<<sum2;
}
