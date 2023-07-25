#include<iostream>
#include<string>
using namespace std;
class shape{
	protected:
		string name;
	public:
		virtual double area() = 0;
		void dispaly(){
			cout<<"Shape is "<<name<<endl;
		}
			
};
class circle: public shape{
	private:
		int radius;
	public:
		circle (int r){
			name = "Circle";
			radius = r;
		} 
		double area(){
			return 3.14*radius*radius;
		}
};
class rectangle: public shape{
	private: 
	double length, breadth;
	public:
		rectangle(double l,double b){
			length= l;
			breadth= b;
			name = "Rectangle";
		}
		double area(){
			return breadth*length;
		}
}; 
class trapezoid: public shape{
	private:
		double base1, base2,height;
	public:
		trapezoid(double b1,double b2,double h){
			name = "Trapezoid";
			base1 = b1;
			base2 = b2;
			height = h;
		}
		double area(){
			return (base1+base2)*height/2;
		}
};
int main(){
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
	shape* s1 = new circle(5);
	shape* s2 = new rectangle(4,5);
	shape* s3 = new trapezoid(3,5,4);
	s1->dispaly();
	cout<<"Area: "<<s1->area()<<endl;
	s2->dispaly();
	cout<<"Area: "<<s2->area()<<endl;
	s3->dispaly();
	cout<<"Area: "<<s3->area()<<endl;
	delete s1;
	delete s2;
	delete s3;
	return 0;
}
