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
    MyClass obj;
    ifstream file("file.bin", ios::binary);
    file.read(reinterpret_cast<char*>(&obj), sizeof(obj));
    file.close();
    cout << obj.x << " " << obj.y << endl;
    return 0;
}
