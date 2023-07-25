#include<iostream>
#include<string>
using namespace std;
display(){
	cout<<"*\n";
}
display(string c){
	cout<<c<<endl;
}
display(string c, int no){
	for(int i=0;i<no;i++){
		cout<<c;
	}
}
int main(){
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
	cout<<"No argument passed: \n";
	display();
	cout<<"One argument passed: \n";
	display("#");
	cout<<"Two argument passed: \n";
	display("$",5);
	return 0;
}

