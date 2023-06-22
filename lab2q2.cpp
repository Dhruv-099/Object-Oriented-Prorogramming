#include<iostream>
using namespace std;
class Complex{
 float real, imag;
public:
 void set(float r, float imgi){
 real=r;
 imag=imgi;
 }
 void display(){
 cout<<real<<"+"<<imag<<"i"<<endl;
 }
Complex sum(Complex other){
 Complex result;
 result.real = real + other.real;
 result.imag = imag + other.imag;
 cout<<result.real<<"+";
 cout<<result.imag<<"i";
 return result;
 }
};
int main(){
	Complex* c1 =new Complex();
	c1->set(3.0,4.0);
	c1->display();
	Complex* c2 =new Complex();
	c2->set(3.0,4.0);
	c2->sum(*c1);

	return 0;
}
