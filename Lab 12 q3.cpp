#include <iostream>
#include <fstream>
using namespace std;
class MyClass {
public:
    int data1;
    double data2;
    char data3;
    void display() {
        cout << "Data 1: " << data1 << endl;
        cout << "Data 2: " << data2 << endl;
        cout << "Data 3: " << data3 << endl;
    }
};
void writeBinaryFile(string filename) {
    ofstream fout(New.txt, ios::binary);
    if (!fout) {
        cout << "Error opening file." << endl;
        return;
    }
    MyClass obj;
    obj.data1 = 10;
    obj.data2 = 3.14;
    obj.data3 = 'A';
    fout.write(reinterpret_cast<char*>(&obj), sizeof(obj));
    fout.close();
    cout << "Object written to file." << endl;
}
void readBinaryFile(string filename) {
    ifstream fin(filename, ios::binary);
    if (!fin) {
        cout << "Error opening file." << endl;
        return;
    }
    MyClass obj;
    fin.read(reinterpret_cast<char*>(&obj), sizeof(obj));
    fin.close();
    obj.display();
}
int main() {
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
    string filename = "data.bin";
    writeBinaryFile(filename);
    readBinaryFile(filename);
    return 0;
}
