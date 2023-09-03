//Simple Queue
#include <iostream>
using namespace std;
class Queue
{
private:
    int front;
    int rear;
    int arr[5];

public:
    Queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)

            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (rear== 4)
            return true;
        else
            return false;
    }
    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is full: " << endl;
            return;
        }
        else if (isEmpty())
        {
            rear = 0;
            front = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }
    int dequeue()
    {
        int x = 0;
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        else if (rear == front)
        {
            x = arr[front];
            arr[front]=0;
            rear = -1;
            front = -1;
            return x;
        }
        else
        {
            cout << "Front value :" << front << endl;
            x = arr[front];
            arr[front] = 0;
            front++;
            return x;
        }
    }

   

    int count()
    {
        return (rear - front + 1);
    }
    void display()
    {
        cout << "All values in the queue are : " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    Queue q1;
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
            cout<<"Enter the value"<<endl;
            cin >> value;
            q1.enqueue(value);
            break;
        case 2:
            cout << "Dequeue operation \n Dequeue value:" << endl;
            q1.dequeue();
            break;
        case 3:
            if (q1.isEmpty())
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
         default:{
         cout << "Enter proper option" << endl;}}
    } while (option != 0);
    return 0;
}