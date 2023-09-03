
#include <iostream>
using namespace std;
struct Node
{int data;
int priority;
public:
    
    Node *next;
    Node *previous;
    Node()
    {
        data = 0;
        priority = 0;
        next = NULL;
        previous = NULL;
    }
    Node( int data1, int priority1)
    {
        data = data1;
        priority = priority1;
        next = NULL;
        previous = NULL;
    }
};
//   void insert(Node * n, Node *&start , Node *&end) {
   
//       if (start == NULL) {
//         start = n;
//         cout << "Node Appended as Head Node" << endl;
//       } else {
//         Node * ptr = start;
//         while (ptr -> next != NULL) {
//           ptr = ptr -> next;
//         }
//         ptr -> next = n;
//         n -> previous = ptr;
//         cout << "Node Appended" << endl;
//       }
//     }
  void baba_convert(Node *&start, int A[])
{
    static int pos = 0;
    if(start == NULL) return;

   baba_convert(start->next, A);
    A[pos++] = start->data;
   

}

void insert(Node *n, Node *&start, Node *&end)
{
    if (start == NULL)
    {
        start = n;
        end = n;
    }
    else if (end->priority < n->priority)
    {
        n->previous = end;
        end->next = n;
        end = n;
    }
    else if (start->priority > n->priority)
    {

        start->previous = n;
        n->next = start;
        start = n;
    }
    else
    {
        Node *temp = start;
        Node *ptr = NULL;
        while (temp->next != NULL && temp->priority <= n->priority)
              {
                temp = temp->next;
           
              }
              
        ptr=temp->previous;
        
        n->next=temp;
        n->previous=ptr;
        temp->previous=n;
        ptr->next=n;

         
}}
int delete_node(Node *&start, Node *&end)
{
    Node *temp = start;
    if (start == NULL)
    {
        cout << "Queue is empty ! " << endl;
        return -1;
    }
    else if (start->previous == NULL)
    {
        start = NULL;
        end = NULL;
    }
    else
    {
        start = start->previous;
    }
    return temp->data;
}

void Display_Queue(Node *&start)
{
    if (start == NULL)
    {
        cout << " Queue is Empty! " << endl;
    }
    else
    {
        Node *temp;
        temp = start;
        while (temp != NULL)
        {
                 cout<<" (" << temp->priority << ") ";
            temp = temp->next;
        }
        cout << endl;
    }
}
int main()
{
    Node *start = NULL;
    Node *end = NULL;
    int option;
    int value;

    do
    {

        cout << "Enter the operation you want to perform : " << endl;
        cout << "1. for insertion: " << endl;
        cout << "2. for dicarding: " << endl;
        cout << "3. for display: " << endl;
        cout << "Press 0 to exit. " << endl;

        cin >> option;

        switch (option)
        {
        case 1:
        {
            Node *n = new Node;
            int Data = 0;
            int priority = 0;
            cout << "Enter the data of new node: " << endl;
            cin >> Data;
            cout << "Enter the priority of new node: " << endl;
            cin >> priority;
            n->data = Data;
            n->priority = priority;
            insert(n, start, end);
            break;
        }
        case 2:
            value = delete_node(start, end);
            if (value != -1)
            {
                cout << "The value deleted is: " << value << endl
                     << endl;
            }
            break;
        case 3:
            Display_Queue(start);
            break;
        
        case 4:
        {int newarr[5];
        baba_convert(start,newarr);
        for (int i = 0; i < 5; i++)
        {
           cout<<newarr[i]<<" ";
        }
        }
        break;}

    } while (option != 0);
    return 0;
}
