#include <iostream>
using namespace std;
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}
int main() {
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
    int i1, i2;
    cout << "Enter two integers: ";
    cin >> i1 >> i2;
    cout << "Largest integer: " << maximum(i1, i2) << endl;
    return 0;
}

