#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
    string str;
    int length;
    ofstream file;
    ifstream readfile;
    cout << "Enter a string: ";
    getline(cin, str);
    length = str.length();
    cout << "Length of the string: " << length << endl;
    file.open("file.txt");
    file << str;
    file.close();
    readfile.open("file.txt");
    getline(readfile, str);
    readfile.close();
    cout << "String read from file: " << str << endl;
    return 0;
}
