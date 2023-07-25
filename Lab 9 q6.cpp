#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person() {
        name = "";
        age = 0;
    }
    Person(const string& n, int a) {
        name = n;
        age = a;
    }
    friend istream& operator>>(istream& input, Person& p);
    friend ostream& operator<<(ostream& output, const Person& p);
};
istream& operator>>(istream& input, Person& p) {
    cout << "Enter name: ";
    input >> p.name;
    cout << "Enter age: ";
    input >> p.age;
    return input;
}
ostream& operator<<(ostream& output, const Person& p) {
    output << "Name: " << p.name << ", Age: " << p.age;
    return output;
}
int main() {
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
    Person p1;
    cout << "Enter details for Person 1:" << endl;
    cin >> p1;
    cout << "Details of Person 1:" << endl;
    cout << p1 << endl;
    Person p2("John", 30);
    cout << "Details of Person 2:" << endl;
    cout << p2 << endl;
    return 0;
}

