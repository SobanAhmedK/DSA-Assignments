//program Circular Queue
#include <iostream>
using namespace std;
class CircularQueue
{

private:
    int front, rear;
    int arr[5];
    int valueCount;

public:
    CircularQueue()
    {
        front = -1;
        rear = -1;
        valueCount = 0;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool Isempty()
    {
        if (front == -1 && rear == -1)
            return true;
        else
            return false;
    }

    bool isFull()

    {
        if (valueCount-1 == front)
        {
            return true;
        }
        else
            return false;
    }

    void enqueu(int value)
    {

        if (isFull())
        {
            cout << "Queue is Full " << endl;
            return;
        }
        else if (Isempty())
        {
            rear = front = 0;
        }
        else
        {
            rear = (rear + 1) % 5;
        }
        arr[rear] = value;
        valueCount++;
    }

    int dequeue()

    {
        int x;
        if (Isempty())
        {
            cout << "Queue is empty " << endl;
            return 0;
        }
        else if (front == rear)
        {

            x = arr[front];
            arr[front] = 0;
            front = -1;
            rear = -1;
            return x;
        }
        else
        {
            cout << "The front value is :" << arr[front] << endl;
            x = arr[front];
            arr[front] = 0;
            front = (front + 1) % 5;
            return x;
        }
        valueCount--;
    }
    int count()
    {
        return valueCount;
    }
    void display()
    {
        cout << "All the items in the queue are :" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    CircularQueue q1;
    int value, option;
    do
    {
        cout << " What operation do you want to perform; " << endl;
        cout << "1 for Enqueue( )" << endl;
        cout << "2 for Dequeue(" << endl;
        cout << "3 for isEmpty()" << endl;
        cout << "4 for isFull()" << endl;
        cout << "5 for count()" << endl;
        cout << "6 for display" << endl;
        cout << "7 for claer screen" << endl;

        cin >> option;
        switch (option)
        {

        case 0:
            break;
        case 1:
            cout << "Enqueue operation" << endl;
            cout << "Enter the value" << endl;
            cin >> value;
            q1.enqueu(value);
            break;
        case 2:
            cout << "Dequeue operation \n Dequeue value:" << q1.dequeue() << endl;

            break;
        case 3:
            if (q1.Isempty())
            {
                cout << "Queue is Empty" << endl;
            }
            else
            {
                cout << "Queue is not empty: " << endl;
            }
            break;

        case 4:
            if (q1.isFull())
            {
                cout << "Queue is full" << endl;
            }
            else
                cout << "Queuue is nOt full" << endl;
            break;
        case 5:
            cout << "count operation" << endl;
            cout << "count of items is" << q1.count();
        case 6:
            cout << "Display function called " << endl;
            q1.display();
            break;
        case 7:
            system("cls");
            break;
        default:
        {
            cout << "Enter proper option" << endl;
        }
        }
    } while (option != 0);
    return 0;
}