#include<iostream>
#include<fstream>
using namespace std;
int main(){
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
	ofstream fout("NUM.TXT");
	if(!fout){
		cout<<"Error opening file."<<endl;
		return 1;
	}
	for (int i=1;i<=200;i++){
		fout<<i<<endl;
	}
	fout.close();
	cout<<"Numbers written to file."<<endl;
}

