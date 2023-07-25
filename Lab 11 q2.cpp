#include <iostream>
using namespace std;
int main() {
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
    try {
        int age;
        cout << "Enter your age: ";
        cin >> age;
        if (age < 18) {
            throw age;
        }
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num == 0) {
            throw num;
        }
        char ch;
        cout << "Enter a character: ";
        cin >> ch;
        if (!isalpha(ch)) {
            throw ch;
        }
        cout << "All inputs are valid." << endl;
    }
    catch (int age) {
        cout << "You must be at least 18 years old to proceed." << endl;
    }
    catch (int num) {
        cout << "Cannot divide by zero." << endl;
    }
    catch (char ch) {
        cout << "Only alphabets are allowed." << endl;
    }
    catch (...) {
        cout << "An unknown exception occurred." << endl;
    }
    return 0;
}
