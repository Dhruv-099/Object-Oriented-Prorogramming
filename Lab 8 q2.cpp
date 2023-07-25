#include<iostream>
#include<string>
using namespace std;
class Publication{
	protected:
	string title;
	float price;
	public: 
	void get_data(){
		cout<<"Enter title: ";
		cin>>title;
		cout<<"Enter price: ";
		cin>>price;
	}
	void put_data(){
		cout<<"Title: "<<title<<endl;
		cout<<"Price: "<<price<<endl;
	}
};
class Book: public Publication{
	int page_count;
	public:
		void get_data(){
			Publication:: get_data();
			cout<<"Enter the no of page:";
			cin>>page_count;
		}
 		void put_data() {
        Publication::put_data();
        cout << "Page Count: " << page_count << endl;
    }
};

class Tape : public Publication {
private:
    float playing_time;

public:
    void get_data() {
        Publication::get_data();
        cout << "Enter the playing time in minutes: ";
        cin >> playing_time;
    }

    void put_data() {
        Publication::put_data();
        cout << "Playing Time: " << playing_time << endl;
    }
};

int main() {
	cout<<"Dhruv Bobal"<<endl;
	cout<<"102106029"<<endl;
    Book book;
    Tape tape;

    cout << "Enter book details:" << endl;
    book.get_data();

    cout << "\nEnter tape details:" << endl;
    tape.get_data();

    cout << "\nBook details:" << endl;
    book.put_data();

    cout << "\nTape details:" << endl;
    tape.put_data();

    return 0;
}
