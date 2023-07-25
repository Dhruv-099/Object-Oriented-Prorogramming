#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    double gpa;
public:
    Student() {
        name = "";
        gpa = 0.0;
    }
    Student(const string& n, double g) {
        name = n;
        gpa = g;
    }
    void display() const {
        cout << "Name: " << name << ", GPA: " << gpa << endl;
    }
    Student operator+(const Student& s) const {
        string newName = name + " " + s.name;
        double newGpa = (gpa + s.gpa) / 2.0;
        return Student(newName, newGpa);
    }
};
int main() {
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
    Student s1("John", 8.8);
    Student s2("Jane", 8.9);
    Student sum = s1 + s2;
    cout << "Sum: ";
    sum.display();
    return 0;
}
