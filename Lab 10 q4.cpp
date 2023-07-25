#include <iostream>
using namespace std;
template<typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(T value) : data(value), next(nullptr) {}
    };
    Node* head;
public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void Insert(T value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    T Pop() {
        if (head == nullptr) {
            throw runtime_error("The linked list is empty.");
        }
        T value = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        return value;
    }
    T Next() {
        if (head == nullptr) {
            throw runtime_error("The linked list is empty.");
        }
        return head->data;
    }
};
int main() {
    LinkedList<int> myList;
    myList.Insert(10);
    myList.Insert(20);
    myList.Insert(30);

    cout << "Next: " << myList.Next() << endl;
    cout << "Pop: " << myList.Pop() << endl;
    cout << "Next: " << myList.Next() << endl;
    cout << "Pop: " << myList.Pop() << endl;
    cout << "Next: " << myList.Next() << endl;
    return 0;
}
