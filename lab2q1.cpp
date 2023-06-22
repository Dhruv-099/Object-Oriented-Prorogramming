#include<iostream>
#include<string>
using namespace std;
class Students{
private:
int rollno;
float cgpa;
char degree[30], hostel[1],name[30];
public:
void addDetails(){
cout<<"Enter name ";
cin>>name;
cout<<"Enter Roll no "<<endl;
cin>>rollno;
cout<<"Enter Cgpa "<<endl;
cin>>cgpa;
cout<<"Enter Degree "<<endl;
cin>>degree;
cout<<"Enter Hostel"<<endl;
cin>>hostel;
}
void updateDetails(){
cout<<"Enter new name ";
cin>>name;
cout<<"Enter new Roll no "<<endl;
cin>>rollno;
}
void updateCgpa(){
cout<<"Enter new Cgpa"<<endl;
cin>>cgpa;
}
void updateResidenceInfo(){
cout<<"Enter New Residence"<<endl;
cin>>hostel;
}
void displayDetails(){
cout<<"Name: "<<name<<endl;
cout<<"Roll no: "<<rollno<<endl;
cout<<"Cgpa: "<<cgpa<<endl;
cout<<"Degree: "<<degree<<endl;
cout<<"Hostel: "<<hostel<<endl;
}
};

int main(){
Students c1;
c1.addDetails();
c1.updateDetails();
c1.updateCgpa();
c1.updateResidenceInfo();
c1.displayDetails();
return 0;
}
