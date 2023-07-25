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
    void display() {
        cout << real << " + i" << imaginary << endl;
    }
    Complex sum(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;
        return result;
    }
};
int main() {
    Complex c1(3.0, 2.0);
    Complex c2(4.0, 5.0);
    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    Complex sum = c1.sum(c2);
    cout << "Sum of complex numbers: ";
    sum.display();
    return 0;
}

