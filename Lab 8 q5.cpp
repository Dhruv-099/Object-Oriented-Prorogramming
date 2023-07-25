#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imaginary;
public:
    Complex() {
        real = 0.0;
        imaginary = 0.0;
    }
    Complex(float r, float i) {
        real = r;
        imaginary = i;
    }
    Complex(const Complex& c) {
        real = c.real;
        imaginary = c.imaginary;
    }
    void display() {
        cout << real << " + i" << imaginary << endl;
    }
};

int main() {
    Complex c1(3.0, 2.0);
    Complex c2 = c1; 
    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    return 0;
}

