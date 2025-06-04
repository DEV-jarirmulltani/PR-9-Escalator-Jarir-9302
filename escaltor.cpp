#include <iostream>
using namespace std;

// Base class for Stack Methodes
class Stack {
public:
    int *arr;      // Dynamic array to store stack elements
    int top;       // Index of top element
    int capacity;  // size of stack
    
    // Constructor for initialize stack with user-defined capacity
    Stack() {
        cout << "Enter the capacity of the stack: ";
        cin >> capacity;
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->top = -1;  // Initialize top to -1 declaring empty stack
    }
    
    // Destructor to clear dynamically allocated memory
    ~Stack() {
        delete[] arr;
    }
};

// Derived class for stack operations
class Stack_opration : public Stack {
public:
    void push(int element);              // Add element to top of stack
    void pop();                          // Remove element from top of stack
    void peek();                         // View top element without removing it
    bool isEmpty();                      // Check if stack is empty
    bool isFull();                       // Check if stack is full
    int size();                          // Get current number of elements
    void display();                      // Show all elements in stack
};

// Push operation: add element in top of stack
void Stack_opration::push(int element) {
    if (top == capacity - 1) {
        cout << "Stack overflow. " << element << endl;
        return;
    }
    arr[++top] = element;
    cout << "Pushed " << element << " into the stack." << endl;
}

// Pop operation: clears top element from stack
void Stack_opration::pop() {
    if (top == -1) {
        cout << "Stack underflow." << endl;
        return;
    }
    cout << "Popped " << arr[top] << " from the stack." << endl;
    top--;
}

// Peek operation: displays top element without clearing it
void Stack_opration::peek() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Top element is: " << arr[top] << endl;
}

// Check if stack is empty
bool Stack_opration::isEmpty() {
    return top == -1;
}

// Check if stack is full
bool Stack_opration::isFull() {
    return top == capacity - 1;
}

// Display all elements in the stack
void Stack_opration::display() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
    }
    else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

// Return current size of stack
int Stack_opration::size() {
    return top + 1;
}

// Main function initialize menu-driven Program
int main() {
    Stack_opration stack;  // Create stack object
    int choice, element;
    
    // Menu-driven Program for choice
    do {
        // Display menu options
        cout << "-----------------------------------"<<endl;
        cout << "-----------------------------------"<<endl;
        cout << "Menu for choosing methods for stack:"<<endl;
        cout << "-----------------------------------"<<endl;
        cout << "-----------------------------------"<<endl;
        cout << "Enter 0 for Exit"<<endl;
        cout << "Enter 1 for Push"<<endl;
        cout << "Enter 2 for Pop"<<endl;
        cout << "Enter 3 for Peek"<<endl;
        cout << "Enter 4 for IsEmpty"<<endl;
        cout << "Enter 5 for IsFull"<<endl;
        cout << "Enter 6 for Display"<<endl;
        cout << "Enter 7 for Size"<<endl;

        cout << "Enter your choice : ";
        cin >> choice;

        // Switch for user choice
        switch (choice) {
        case 1:  // Push operation
            cout << "Enter element to push: ";
            cin >> element;
            stack.push(element);
            break;
        case 2:  // Pop operation
            stack.pop();
            break;
        case 3:  // Peek operation
            stack.peek();
            break;
        case 4:  // Check if empty
            if (stack.isEmpty())
                cout << "Stack is empty." << endl;
            else
                cout << "Stack is not empty." << endl;
            break;
        case 5:  // Check if full
            if (stack.isFull())
                cout << "Stack is full." << endl;
            else
                cout << "Stack is not full." << endl;
            break;
        case 6:  // Display stack
            stack.display();
            break;
        case 7:  // Show size
            cout << " size of stack : " << stack.size() << endl;
            break;
        case 0:  // Exit program
            cout << "Exiting!!" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}