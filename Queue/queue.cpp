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











![Screenshot 2025-06-04 162432](https://github.com/user-attachments/assets/b01f9155-22f0-4c91-a08d-167af5efe693)
![Screenshot 2025-06-04 162445](https://github.com/user-attachments/assets/cd336c94-170c-4297-b4c1-7f70cfa7424b)
![Screenshot 2025-06-04 162458](https://github.com/user-attachments/assets/980ae092-c1af-4623-b0f0-f706f7f17a82)
![Screenshot 2025-06-04 162538](https://github.com/user-attachments/assets/843735cc-26eb-4b7e-be86-583221e38daf)
![Screenshot 2025-06-04 162525](https://github.com/user-attachments/assets/9f5396d4-0360-4ba5-831a-1597410255d5)
![Screenshot 2025-06-04 162552](https://github.com/user-attachments/assets/c81cc391-28c0-40bf-ad8a-458f0bb3ceaa)
![Screenshot 2025-06-04 162610](https://github.com/user-attachments/assets/4f1211fc-2c2f-4764-b8d0-b9a4936ae148)
![Screenshot 2025-06-04 162625](https://github.com/user-attachments/assets/94b9866c-5aa0-46e8-99fb-3236dd8c87de)
PR-9-Escalator-Jarir-9302
