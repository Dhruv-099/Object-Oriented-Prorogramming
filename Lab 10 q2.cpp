#include<iostream>
using namespace std;
template <typename T>
void swapValues(T &a, T&b){
	T temp=a;
	a=b;
	b=temp;
}
int main(){
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
	int a=10,b=20;
	cout<<"Before Swapping: "<<a<<" "<<b<<endl;
	swapValues(a,b);
	cout<<"After Swapping: "<<a<<" "<<b<<endl;
}
