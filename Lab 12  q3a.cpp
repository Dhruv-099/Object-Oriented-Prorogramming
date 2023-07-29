#include <iostream>
#include <fstream>
using namespace std;
class MyClass {
public:
    int x;
    float y;
};
int main() {
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
    MyClass obj = {10, 3.14};
    ofstream file("file.bin", ios::binary);
    file.write(reinterpret_cast<char*>(&obj), sizeof(obj));
    file.close();
    return 0;
}
