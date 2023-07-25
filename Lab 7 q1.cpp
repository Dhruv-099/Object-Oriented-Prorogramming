#include <iostream>
using namespace std;
class polygon{
	protected:
		int width,height;
	public:
		void setvalue(int w, int h){
			width = w;
			height = h;
		}	
};
class rectangle: public polygon{
	public: 
	int calculatearea(){
		return width*height;
	}
};
class triangle: public polygon{
	public: 
	int calculatearea(){
		return width*height/2;
	}
};
int main(){
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
	rectangle rect;
	triangle tri;
	polygon *ppoly1 = &rect;
	polygon *ppoly2 = &tri;
	ppoly1->setvalue(4,5);
	ppoly2->setvalue(4,5);
	cout<<"Area of rectangle = "<<rect.calculatearea()<<endl;
	cout<<"Area of triangle = "<<tri.calculatearea()<<endl;
	return 0;
}
