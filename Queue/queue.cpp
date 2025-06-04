#include <iostream>
using namespace std;
class Queue
{
    int *arr;
    int capacity, front, rear, size;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->front = 0;
        this->rear = -1;
        this->size = 0;
    }
    ~Queue()
    {
        delete[] arr;
    }

    void enqueue(int element);
    void dequeue();
    int Getfront();
    int Getrear();
    bool isFull();
    bool isEmpty();
    void display();
    void Size();
};

void Queue::enqueue(int element)
{
    if (isFull())
    {
        cout << "Queue overflow! " << element << endl;
    }
    else
    {
        arr[++rear] = element;
        size++;
    }
}

void Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue underflow!" << endl;
    }
    else
    {
        cout << "Dequeue" << arr[front] << " from the queue." << endl;
        front++;
        size--;
    }
}
void Queue::display()
{
    if (isEmpty())
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
int Queue::Getfront()
{
    if (isEmpty())
    {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    return arr[front];
}
int Queue::Getrear()
{
    if (isEmpty())
    {
        cout << "Queue is empty! Cannot get rear element." << endl;
        return -1;
    }
    return arr[rear];
}
bool Queue::isFull()
{
    if (rear == capacity - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Queue::isEmpty()
{
    if (front == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Queue::Size()
{
    cout << "Size of queue: " << size << endl;
}
int main()
{
    int capacity;
    cout << "Enter the capacity of the queue: ";
    cin >> capacity;
    Queue queue(capacity);
    int choice, elements;
    do
    {
        cout << "Enter 1 for. Enqueue"<<endl;
        cout << "Enter 2 for. Dequeue"<<endl;
        cout << "Enter 3 for. Front"<<endl;
        cout << "Enter 4 for. Rear"<<endl;
        cout << "Enter 5 for. Display"<<endl;
        cout << "Enter 6 for. Size"<<endl;
        cout << "Enter 0 for. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element to enqueue: ";
            cin >> elements;
            queue.enqueue(elements);
            break;
        case 2:
            queue.dequeue();
            break;
        case 3:
            cout << "Front element: " << queue.Getfront() << endl;
            break;
        case 4:
            cout << "Rear element: " << queue.Getrear() << endl;
            break;
        case 5:
            queue.display();
            break;
        case 6:
            queue.Size();
            break;
        case 7:
            cout << "Exiting!!" << endl;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 0);
    return 0;
}
