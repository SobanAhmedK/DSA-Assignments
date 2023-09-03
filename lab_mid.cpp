#include <iostream>
#include <string>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

public:
    friend int binarySearch(Stack &s, int left, int right, int x);
    friend void insertionSort(Stack &s);
    friend void bubbleSort(Stack &s);
    friend bool check_sorting(Stack &s);
    friend int linearSearch(Stack &s, int n);
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (top == 4)
            return true;
        else
            return false;
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "stack overflow" << endl;
        }
        else
        {
            top++; // 1
            arr[top] = val;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "stack underflow" << endl;
            return 0;
        }
        else
        {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }

    int count()
    {
        return (top + 1);
    }

    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "stack underflow" << endl;
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }

    void change(int pos, int val)
    {
        arr[pos] = val;
        cout << "value changed at location " << pos << endl;
    }

    void display()
    {
        cout << "All values in the Stack are " << endl;
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }

    void menu_stack(Stack &s1)
    {

        int option, postion, value;

        do
        {
            cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
            cout << "1. Push()" << endl;
            cout << "2. Pop()" << endl;
            cout << "3. isEmpty()" << endl;
            cout << "4. isFull()" << endl;
            cout << "5. peek()" << endl;
            cout << "6. count()" << endl;
            cout << "7. change()" << endl;
            cout << "8. display()" << endl;
            cout << "9. Clear Screen" << endl;
            cout << "0 for back " << endl;

            cin >> option;
            switch (option)
            {
            case 0:
                break;
            case 1:
                cout << "Enter an item to push in the stack" << endl;
                cin >> value;
                s1.push(value);
                break;
            case 2:
                cout << "Pop Function Called - Poped Value: " << s1.pop() << endl;
                break;
            case 3:
                if (s1.isEmpty())
                    cout << "Stack is Empty" << endl;
                else
                    cout << "Stack is not Empty" << endl;
                break;
            case 4:
                if (s1.isFull())
                    cout << "Stack is Full" << endl;
                else
                    cout << "Stack is not Full" << endl;
                break;
            case 5:
                cout << "Enter position of item you want to peek: " << endl;
                cin >> postion;
                cout << "Peek Function Called - Value at position " << postion << " is " << s1.peek(postion) << endl;
                break;
            case 6:
                cout << "Count Function Called - Number of Items in the Stack are: " << s1.count() << endl;
                break;
            case 7:
                cout << "Change Function Called - " << endl;
                cout << "Enter position of item you want to change : ";
                cin >> postion;
                cout << endl;
                cout << "Enter value of item you want to change : ";
                cin >> value;
                s1.change(postion, value);
                break;
            case 8:
                cout << "Display Function Called - " << endl;
                s1.display();
                break;
            case 9:
                system("cls");
                break;
            default:
                cout << "Enter Proper Option number " << endl;
            }

        } while (option != 0);
    }
};

class Queue
{
private:
    int front;
    int rear;
    int arr[5];

public:
    friend int binarySearch(Queue &q, int left, int right, int x);
    friend void insertionSort(Queue &q);
    friend void bubbleSort(Queue &q);
    friend bool check_sorting(Queue &q);
    friend int linearSearch(Queue &q, int n);
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
        if (rear == 4)
            return true;
        else
            return false;
    }
    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue full" << endl;
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
            return x;
        }
        else if (rear == front)
        {
            x = arr[rear];
            rear = -1;
            front = -1;
            return x;
        }
        else
        {
            cout << "front value: " << front << endl;
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
        cout << "All values in the Queue are - " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << "  ";
        }
    }

    void menu_queue(Queue &q1)
    {

        int value, option;

        do
        {
            cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
            cout << "1. Enqueue()" << endl;
            cout << "2. Dequeue()" << endl;
            cout << "3. isEmpty()" << endl;
            cout << "4. isFull()" << endl;
            cout << "5. count()" << endl;
            cout << "6. display()" << endl;
            cout << "7. Clear Screen" << endl;
            cout << "0 for back " << endl;

            cin >> option;

            switch (option)
            {
            case 0:
                break;
            case 1:
                cout << "Enqueue Operation \nEnter an item to Enqueue in the Queue" << endl;
                cin >> value;
                q1.enqueue(value);
                break;
            case 2:
                cout << "Dequeue Operation \nDequeued Value : " << q1.dequeue() << endl;
                break;
            case 3:
                if (q1.isEmpty())
                    cout << "Queue is Empty" << endl;
                else
                    cout << "Queue is not Empty" << endl;
                break;
            case 4:
                if (q1.isFull())
                    cout << "Queue is Full" << endl;
                else
                    cout << "Queue is not Full" << endl;
                break;
            case 5:
                cout << "Count Operation \nCount of items in Queue : " << q1.count() << endl;
                break;
            case 6:
                cout << "Display Function Called - " << endl;
                q1.display();
                break;
            case 7:
                system("cls");
                break;
            default:
                cout << "Enter Proper Option number " << endl;
            }

        } while (option != 0);
    }
};

void insertionSort(Stack &S)
{ 
    int key;
    int j = 0;
    for (int i = 1; i < 5; i++)
    {
        key = S.arr[i];
        j = i - 1;
        while (j >= 0 && S.arr[j] > key)
        {
            S.arr[j + 1] = S.arr[j];
            j = j - 1;
        }
        S.arr[j + 1] = key;
    }
    cout << "Stack after insertion sort is: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << S.arr[i] << " ";
    }
    cout << endl;
}
void insertionSort(Queue &q)
{
    int key;
    int j = 0;
    for (int i = 1; i < 5; i++)
    {
        key = q.arr[i];
        j = i - 1;
        while (j >= 0 && q.arr[j] > key)
        {
            q.arr[j + 1] = q.arr[j];
            j = j - 1;
        }
        q.arr[j + 1] = key;
    }
    cout << "Queueafter insertion sort is: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << q.arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(Stack &S)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (5 - i - 1); j++)
        {
            if (S.arr[j] > S.arr[j + 1])
            {
                int temp = S.arr[j];
                S.arr[j] = S.arr[j + 1];
                S.arr[j + 1] = temp;
            }
        }
    }

    cout << "Stack after bubble  sort is: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << S.arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(Queue &q)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (5 - i - 1); j++)
        {
            if (q.arr[j] > q.arr[j + 1])
            {
                int temp = q.arr[j];
                q.arr[j] = q.arr[j + 1];
                q.arr[j + 1] = temp;
            }
        }
    }
    cout << "Queue after bubble  sort is: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << q.arr[i] << " ";
    }
    cout << endl;
}

bool check_sorting(Stack &s)
{
    bool flag = true;
    for (int i = 0; i < 5; i++)
    {
        if (i != 4)
        {
            if (s.arr[i] < s.arr[i + 1])
            {
                flag = true;
            }

            else
            {
                flag = false;
                break;
            }
        }
    }

    if (flag == true)
    {
        return flag;
    }

    for (int i = 0; i < 5; i++)
    {
        if (i != 4)
        {
            if (s.arr[i] > s.arr[i + 1])
            {
                flag = true;
            }

            else
            {
                flag = false;
                break;
            }
        }
    }

    return flag;
}

bool check_sorting(Queue &q)
{
    bool flag = true;
    for (int i = 0; i < 5; i++)
    {
        if (i != 4)
        {
            if (q.arr[i] < q.arr[i + 1])
            {
                flag = true;
            }

            else
            {
                flag = false;
                break;
            }
        }
    }

    if (flag == true)
    {
        return flag;
    }

    for (int i = 0; i < 5; i++)
    {
        if (i != 4)
        {
            if (q.arr[i] > q.arr[i + 1])
            {
                flag = true;
            }

            else
            {
                flag = false;
                break;
            }
        }
    }

    return flag;
}

int binarySearch(Stack &s, int left, int right, int x)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (s.arr[mid] == x)
        {
            return mid;
        }
        else if (s.arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int binarySearch(Queue &q, int left, int right, int x)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (q.arr[mid] == x)
        {
            return mid;
        }
        else if (q.arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int linearSearch(Stack &s, int n)
{
    int temp = -1;

    for (int i = 0; i < 5; i++)
    {
        if (s.arr[i] == n)
        {

            temp = i;
            return temp;
            break;
        }
    }

    if (temp == -1)
    {
        return temp;
    }
}

int linearSearch(Queue &q, int n)
{
    int temp = -1;

    for (int i = 0; i < 5; i++)
    {
        if (q.arr[i] == n)
        {

            temp = i;
            return temp;
            break;
        }
    }

    if (temp == -1)
    {
        return temp;
    }
}
int main()
{
    Stack s;
    Queue q;
    int option, value;
    do
    {
        cout << "Enter the data type of your chhoice: " << endl;
        cout << "1 for stack" << endl;
        cout << "2 for queue" << endl;
        cout << "0 to back." << endl;
        cin >> option;
        switch (option)
        {
        case 1:
        {
            s.menu_stack(s);
            if (check_sorting(s))
            {
                cout << "***********************You have a Sorted data structure!!************************" << endl;
                int opt;
                do
                {
                    cout << "1 for binary search " << endl;
                    cout << "2 for linear search " << endl;
                    cout << "0 for back " << endl;
                    cin >> opt;
                    switch (opt)
                    {
                        int num;
                    case 0:
                        break;
                    case 1:
                    {

                        cout << "Enter the num to be searched: " << endl;
                        cin >> num;
                        int output = binarySearch(s, 0, 4, num);
                        if (output == -1)
                        {
                            cout << "NO value Found!" << endl;
                        }
                        else
                        {
                            cout << "Value found at index: " << output << endl;
                        }
                    }
                    break;
                    case 2:
                    {
                        cout << "Enter the number to be searched: " << endl;
                        cin >> num;
                        int output = linearSearch(s, num);
                        if (output == -1)
                        {
                            cout << "NO value Found!" << endl;
                        }
                        else
                        {
                            cout << "Value found at index: " << output << endl;
                        }
                    }
                    break;
                    }

                } while (opt != 0);
            }
            else
            {
                int sort_op;
                do
                {
                    cout << "Choose sorting algo for stack :" << endl;
                    cout << "1 for Bubble sort " << endl;
                    cout << "2 for Insertion sort " << endl;
                    cout << "0 to back " << endl;
                    cin >> sort_op;
                    switch (sort_op)
                    {
                    case 1:
                    {
                        bubbleSort(s);
                        int opt;
                        do
                        {
                            cout << "1 for binary search " << endl;
                            cout << "2 for linear search " << endl;
                            cout << "0 for back " << endl;
                            cin >> opt;
                            switch (opt)
                            {
                                int num;
                            case 0:
                                break;
                            case 1:
                            {

                                cout << "Enter the num to be searched: " << endl;
                                cin >> num;
                                int output = binarySearch(s, 0, 4, num);
                                if (output == -1)
                                {
                                    cout << "NO value Found!" << endl;
                                }
                                else
                                {
                                    cout << "Value found at index: " << output << endl;
                                }
                            }
                            break;
                            case 2:
                            {
                                cout << "Enter the number to be searched: " << endl;
                                cin >> num;
                                int output = linearSearch(s, num);
                                if (output == -1)
                                {
                                    cout << "NO value Found!" << endl;
                                }
                                else
                                {
                                    cout << "Value found at index: " << output << endl;
                                }
                            }
                            break;
                            }

                        } while (opt != 0);
                    }
                    break;
                    case 2:
                    {
                        insertionSort(s);
                        int opt;
                        do
                        {
                            cout << "1 for binary search " << endl;
                            cout << "2 for linear search " << endl;
                            cout << "0 for back " << endl;
                            cin >> opt;
                            switch (opt)
                            {
                                int num;
                            case 0:
                                break;
                            case 1:
                            {

                                cout << "Enter the num to be searched: " << endl;
                                cin >> num;
                                int output = binarySearch(s, 0, 4, num);
                                if (output == -1)
                                {
                                    cout << "NO value Found!" << endl;
                                }
                                else
                                {
                                    cout << "Value found at index: " << output << endl;
                                }
                            }
                            break;
                            case 2:
                            {
                                cout << "Enter the number to be searched: " << endl;
                                cin >> num;
                                int output = linearSearch(s, num);
                                if (output == -1)
                                {
                                    cout << "NO value Found!" << endl;
                                }
                                else
                                {
                                    cout << "Value found at index: " << output << endl;
                                }
                            }
                            break;
                            }

                        } while (opt != 0);
                    }
                    break;
                    case 0:
                        break;
                    }
                } while (sort_op != 0);
            }
        }
        break;
        case 2:
        {
            q.menu_queue(q);
            if (check_sorting(q))
            {
                cout << "******************************You have already a sorted Queue!!***************************" << endl;

                int opt;
                do 
                {
                    cout << "1 for binary search " << endl;
                    cout << "2 for linear search " << endl;
                    cout << "0 for back " << endl;
                    cin >> opt;
                    switch (opt)
                    {
                        int num;
                    case 0:
                        break;
                    case 1:
                    {

                        cout << "Enter the num to be searched: " << endl;
                        cin >> num;
                        int output = binarySearch(q, 0, 4, num);
                        if (output == -1)
                        {
                            cout << "NO value Found!" << endl;
                        }
                        else
                        {
                            cout << "Value found at index: " << output << endl;
                        }
                    }
                    break;
                    case 2:
                    {
                        cout << "Enter the number to be searched: " << endl;
                        cin >> num;
                        int output = linearSearch(q, num);
                        if (output == -1)
                        {
                            cout << "NO value Found!" << endl;
                        }
                        else
                        {
                            cout << "Value found at index: " << output << endl;
                        }
                    }
                    break;
                    }

                } while (opt != 0);
            }
            else
            {
                int sort_op1;
                do
                {
                    cout << "Choose sorting algo for queue :" << endl;
                    cout << "1 for Bubble sort " << endl;
                    cout << "2 for Insertion sort " << endl;
                    cout << "0 to back " << endl;
                    cin >> sort_op1;
                    switch (sort_op1)
                    {
                    case 1:
                    {
                        bubbleSort(q);

                        int opt;
                        do
                        {
                            cout << "1 for binary search " << endl;
                            cout << "2 for linear search " << endl;
                            cout << "0 for back " << endl;
                            cin >> opt;
                            switch (opt)
                            {
                                int num;
                            case 0:
                                break;
                            case 1:
                            {

                                cout << "Enter the num to be searched: " << endl;
                                cin >> num;
                                int output = binarySearch(q, 0, 4, num);
                                if (output == -1)
                                {
                                    cout << "NO value Found!" << endl;
                                }
                                else
                                {
                                    cout << "Value found at index: " << output << endl;
                                }
                            }
                            break;
                            case 2:
                            {
                                cout << "Enter the number to be searched: " << endl;
                                cin >> num;
                                int output = linearSearch(q, num);
                                if (output == -1)
                                {
                                    cout << "NO value Found!" << endl;
                                }
                                else
                                {
                                    cout << "Value found at sindex: " << output << endl;
                                }
                            }
                            break;
                            }

                        } while (opt != 0);
                    }

                    break;
                    case 2:
                    {
                        insertionSort(q);

                        int opt;
                        do
                        {
                            cout << "1 for binary search " << endl;
                            cout << "2 for linear search " << endl;
                            cout << "0 for back " << endl;
                            cin >> opt;
                            switch (opt)
                            {
                                int num;
                            case 0:
                                break;
                            case 1:
                            {

                                cout << "Enter the num to be searched: " << endl;
                                cin >> num;
                                int output = binarySearch(q, 0, 4, num);
                                if (output == -1)
                                {
                                    cout << "NO value Found!" << endl;
                                }
                                else
                                {
                                    cout << "Value found at index: " << output << endl;
                                }
                            }
                            break;
                            case 2:
                            {
                                cout << "Enter the number to be searched: " << endl;
                                cin >> num;
                                int output = linearSearch(q, num);
                                if (output == -1)
                                {
                                    cout << "NO value Found!" << endl;
                                }
                                else
                                {
                                    cout << "Value found at index: " << output << endl;
                                }
                            }
                            break;
                            }

                        } while (opt != 0);
                    }
                    break;
                    case 0:
                        break;
                    }
                } while (sort_op1 != 0);
            }
        }
        break;
        case 0:
            break;
        }

    } while (option != 0);
    return 0;
}
