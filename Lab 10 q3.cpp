#include<iostream>
using namespace std;
template <typename T>
class Calculator{
	T num1;
	T num2;
	public:
	Calculator(T n1,T n2){
		num1=n1;
		num2=n2;
	}	
	void addition(){
		cout<<"Addition: "<<num1+num2<<endl;
	}
	void substraction(){
		cout<<"Substraction: "<<num1-num2<<endl;
	}
	void multiplication(){
		cout<<"Multiplication: "<<num1*num2<<endl;
	}
	void division(){
		if(num2==0){
			cout<<"Error not divisible by 0";
		}else{
			cout<<"Division: "<<num1/num2<<endl;
		}
	}
};
int main(){
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
	int a,b;
	cout<<"Enter two integers";
	cin>>a>>b;
	Calculator<int> intcalc(a,b);
	intcalc.addition();
	intcalc.substraction();
	intcalc.multiplication();
	intcalc.division();
	return 0;
}
