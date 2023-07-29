#include <iostream>
#include <fstream>
using namespace std;
int main() {
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
    string source_file = "Source.txt";
    string target_file = "Target.txt";
    ifstream source;
    ofstream target;
    source.open("Source.txt", ios::binary);
    target.open("Target.txt", ios::binary | ios::app);
    if (!source.is_open()) {
        cout << "Error opening source file." << endl;
        return 1;
    }
    if (!target.is_open()) {
        cout << "Error opening target file." << endl;
        return 1;
    }
    target << source.rdbuf();
    source.close();
    target.close();
    cout << "File copied successfully." << endl;
    return 0;
}
