#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node()
    {
        next = NULL;
        data = 0;
    }
    Node(int data1)
    {
        data = data1;
    }
};
void insert_node(Node* n, Node *&top)
{
    if (top == NULL)
    {
        top = n;
        cout << "Node is appended in the Stack. " << endl;
    }
    else{
    n->next = top;
    top = n;
    cout << "node is appended in the stack. " << endl;
}}

int delete_node(Node *&top)

{
    if (top == NULL)
    {
        cout << "Stack is empty! " << endl;
   return -1; }
    else
    {Node * temp=top;
        top = top->next;
    return temp->data; }
}
void Display_stack(Node *&top)

{
    if (top == NULL)
    {
        cout << " stack is Empty! " << endl;
    }
    else

    {
        Node *temp;
        temp = top;
        while (temp->next != NULL)
        {
            cout << " (" << temp->data << ") ";
            temp = temp->next;
        }
    cout<<endl;}
}

int main()
{
Node *Top;
int option;
int value;
int i;

while(true)
{   cout<<"                                                                  program runs this many times         "<<i<<endl;
    Node* n=new Node[6422280];
    value=2;
    n->data=value;
     insert_node(n , Top);
   i++; }
   
   
    return 0;
}