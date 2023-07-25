#include<iostream>
#include<math.h>
using namespace std;
float area(int base, int height){
    return 0.5 *base*height;
}

float area(float side){
    return sqrt(3)/4 * (side * side);
}

float area(int base, float side){
	float result = (side/2)*sqrt((base*base)-((side*side)/4));
    return result;
}
int main(){
	float side;
	int base,height;
	cout << "Enter the base and height of the right-angled triangle: ";
    cin >> base >> height;
    cout << "Area of the right-angled triangle is: " << area(base, height) << endl;
    cout << "Enter the side of the equilateral triangle: ";
    cin >> side;
    cout << "Area of the equilateral triangle is: " << area(side) << endl;
    cout << "Enter the base and side of the isosceles triangle: ";
    cin >> base >> side;
    cout << "Area of the isosceles triangle is: " << area(base, side) << endl;
	return 0;
}
