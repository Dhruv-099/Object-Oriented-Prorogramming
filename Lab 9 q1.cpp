#include<iostream>
using namespace std;
class Distance{
	int feet,inches;
	public:
		Distance(){
			feet=0;
			inches=0;
		}
		Distance(int a, int b){
			feet=a;
			inches=b;
		}
		void displayDistance(){
			cout<<"Feet F: "<<feet<<" Inches I: "<<inches<<endl;
		}
		Distance operator -(){
			Distance result;
			result.feet=-feet;
			result.inches=-inches;
			return result;
		}
};
int main(){
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
	Distance D1(11,16),D2(-5,7);
	-D1;
	D1.displayDistance();
	-D2;
	D2.displayDistance();
	return 0;
}

