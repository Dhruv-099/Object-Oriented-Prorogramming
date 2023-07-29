#include <iostream>
#include<fstream>
using namespace std;
int noofalphabets(){
    ifstream fin("New.txt");
    int count=0;
    char ch;
    fin.get(ch);
    while(!fin.eof()){
        count++;
        fin.get(ch);
    }
    fin.close();
    return count;
}

int main() {
    int count=noofalphabets();
    cout<<count;
    return 0;
}
