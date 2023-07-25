#include <iostream>
using namespace std;
class MyException {
public:
    const char* what() {
        return "My Exception";
    }
};
void foo() {
    try {
        throw MyException();
    }
    catch (MyException& e) {
        cout << "Caught MyException: " << e.what() << endl;
        throw; 
    }
}
int main() {
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
    try {
        foo();
    }
    catch (MyException& e) {
        cout << "Caught MyException in main: " << e.what() << endl;
    }
    return 0;
}
