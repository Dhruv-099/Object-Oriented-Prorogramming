#include<iostream>
#include<string>
using namespace std;
class String{
	string str;
	public:
		String(){
			str="";
		}
		String(const string &s){
			str=s;
		}
		bool operator ==(const String &s){
			return (str==s.str);
		}
		String operator+(String &s){
			return String(str +" "+ s.str);
		}
		void display(){
			cout<<str<<endl;
		}
};
int main(){
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
	String s1("Hello");
	String s2("World");
	if(s1==s2){
		cout<<"Strings are equal"<<endl;
	}else{
		cout<<"Strings are not equal"<<endl;
	}
	String s3=s1+s2;
	cout<<"Cacenated Strings: ";
	s3.display();
	return 0;
}
