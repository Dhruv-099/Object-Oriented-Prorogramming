#include <iostream>
#include <fstream>
using namespace std;
int countAlphabets(string filename) {
    ifstream fin("New.txt");
    char ch;
    int count = 0;
    if (!fin) {
        cout << "Error opening file." << endl;
        return -1;
    }
    while (fin.get(ch)) {
        if (isalpha(ch)) {
            count++;
        }
    }
    fin.close();
    return count;
}

int main() {
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
    string filename = "NOTES.TXT";
    int count = countAlphabets(filename);
    if (count != -1) {
        cout << "Number of alphabets in " << filename << ": " << count << endl;
    }
    return 0;
}
