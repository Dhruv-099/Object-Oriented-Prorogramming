#include<iostream>
#include<string>
using namespace std;
class Students{
	protected:
		string name;
		int rollno;
	public:
		virtual void getdata() = 0;
		virtual void disp() = 0;
};
class Engineering: public Students{
	private: 
	int mathmarks,physmarks,chemmarks;
	public:
		void getdata(){
			cout<<"Enter name for Engineering Student: ";
			cin>>name;
			cout<<"Roll No:";
			cin>> rollno;
			cout<<"Enter Math marks:";
			cin>>mathmarks;
			cout<<"Enter Physics Marks: ";
			cin>>physmarks;
			cout<<"Enter Chemistry Marks: ";
			cin>>chemmarks;
		}
		void disp(){
		cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Math Marks: " << mathmarks << endl;
        cout << "Physics Marks: " << physmarks << endl;
        cout << "Chemistry Marks: " << chemmarks << endl;
		}
};
class Medicine: public Students{
	private: 
	int biomarks,physmarks,chemmarks;
	public:
		void getdata(){
			cout<<"Enter name for Medicine Student: ";
			cin>>name;
			cout<<"Roll No:";
			cin>> rollno;
			cout<<"Enter Biology marks:";
			cin>>biomarks;
			cout<<"Enter Physics Marks: ";
			cin>>physmarks;
			cout<<"Enter Chemistry Marks: ";
			cin>>chemmarks;
		}
		void disp(){
		cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Biology Marks: " << biomarks << endl;
        cout << "Physics Marks: " << physmarks << endl;
        cout << "Chemistry Marks: " << chemmarks << endl;
		}
};
class Science: public Students{
	private: 
	int mathmarks,physmarks,chemmarks,biomarks;
	public:
		void getdata(){
			cout<<"Enter name for Science Student: "<<endl;
			cin>>name;
			cout<<"Roll No:";
			cin>> rollno;
			cout<<"Enter Math marks:";
			cin>>mathmarks;
			cout<<"Enter Physics Marks: ";
			cin>>physmarks;
			cout<<"Enter Chemistry Marks: ";
			cin>>chemmarks;
			cout<<"Enter Biology Marks: ";
			cin>>biomarks;
		}
		void disp(){
		cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Math Marks: " << mathmarks << endl;
        cout << "Physics Marks: " << physmarks << endl;
        cout << "Chemistry Marks: " << chemmarks << endl;
        cout << "Chemistry Marks: " << biomarks << endl;
		}
};
int main(){
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
	Students* student[3];
	student[0] = new Engineering;
	student[1] = new Medicine;
	student[2] = new Science();
	for(int i= 0;i<3;i++){
		student[i]->getdata();
	}
	cout<<endl;
	for(int i= 0;i<3;i++){
		student[i]->disp(); 
		cout<<endl;
	}
	for(int i=0;i<3;i++){
		delete student[i];
	}
	return 0;
}
