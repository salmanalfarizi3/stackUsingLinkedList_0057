#include <iostream>
using namespace std;

class Node 
{
public: 
int data;
Node *data;

    node()
    {
        next = NULL;
    }

};

class Stack 
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    
    }

    int push(int value)
    {
        Node *newNode = new Node();
    }
    
        int push(int value)
        {
            Node *newNode = new Node();
            newNode ->data = value;
            newNode -> next top;
            top = newNode;
            cout << "Push value :" << value << endl;
            retrun value;
        }
        void pop() {
            Node *temp = top;
            if (isEmpty()) {
                cout << "Stack is Empty." << endl;
                return;
            }
        
            cout << "Popped value: " << temp->data << endl;
            top = temp->next;
            delete temp;
        }
        
        void peek() {
            if (isEmpty()) {
                cout << "List is Empty." << endl;
            } else {
                Node* current = top;
                while (current != NULL) {
                    cout << current->data << " ";
                    current = current->next;
                }
                cout << endl;
            }
        }
        
        bool isEmpty() {
            return top == NULL;
        }
        
        int main() {
            Stack stack;
        
            int choice = 0;
        }
        while (choice != 5) {
            cout << "1. Push\n";
            cout << "2. Pop\n";
            cout << "3. Peek\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
        
            switch (choice) {
                case 1:
                    cout << "Enter the value to push: ";
                    cin >> value;
                    stack.push(value); // Push the entered value onto the stack
                    break;
                // case-case lainnya belum terlihat di gambar
                case 2:
            stack.pop(); // Pop the top element from the stack
            break;

        case 3:
            stack.peek(); // Get the value of the top element
            break;

        case 4:
            cout << "Exiting program." << endl;
            break;

            default:
            cout << "Invalid choice. Try again." << endl;
            break;
            }
        
            cout << endl;
        }

        return 0;
}
     