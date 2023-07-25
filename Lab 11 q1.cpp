#include<iostream>
using namespace std;
void divide(int numerator, int denominator){
	try{
		if (denominator==0){
			throw "Division by zero error";
		}
		int result = numerator/denominator;
		cout<<"Result: "<<result<<endl;
	} catch(const char* errorMessage){
		cout<<"Error: "<<errorMessage<<endl;
	}
}
int main(){
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
	int num1,num2;
	cout<<"Enter Numerator: ";
	cin>> num1;
	cout<<"Enter denominator: ";
	cin>> num2;
	divide(num1,num2);
	return 0;
}
