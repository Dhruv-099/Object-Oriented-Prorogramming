#include<iostream>
using namespace std;
int main(){
int num1=2;
int num2=300;
for(int i=2; i<=num2;i++){
bool prime =true;
for(int j=2;j<=i/2;j++){
if(i%j==0)
prime= false;
break;
}
if (prime= true){
cout<<i<<endl;
}
}
}

