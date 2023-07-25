#include<iostream>
using namespace std;
class Float{
	float N1;
	public:
		Float(){
			N1=0;
		}
		Float(float f){
		N1=f;
		}
		Float operator +(Float &f){
			return Float(N1 + f.N1);
		}
		Float operator -(Float &f){
			return Float(N1 - f.N1);
		}
		Float operator *(Float &f){
			return Float(N1 * f.N1);
		}
		Float operator /(Float &f){
			return Float(N1/f.N1);
		}
		void display(){
			cout<<N1;
		}
};
int main(){
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
	Float f1(5.5);
    Float f2(2.5);
    Float sum = f1 + f2;
    cout << "\nSum: ";
    sum.display();
    Float difference = f1 - f2;
    cout << "\nDifference: ";
    difference.display();
    Float product = f1 * f2;
    cout << "\nProduct: ";
    product.display();
    Float quotient = f1 / f2;
    cout << "\nQuotient: ";
    quotient.display();
    return 0;
}
