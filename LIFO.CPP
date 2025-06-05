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
        
        