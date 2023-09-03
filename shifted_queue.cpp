// Circular queue with shifting

#include <iostream>
using namespace std;

void insert(int value, int &front, int &end, int queue[5])
{
    int count;
    count = front;
   if (end==5 && front>0)
    {
        int j = 0;
        while (j != count)
        {

            for (int i = 0; i < 5; i++)
            {
                queue[i] = queue[i + 1];
            }

            j++;
        }
        int end_val;
        end_val=5-front;
        end=end_val;
         for (int i = end_val; i < 5; i++)
         {
              queue[i] = 0;
        }
            
        queue[end]=value;
        end++;
        front=0;}
        else if(front==0 && end==0)
        {
            queue[end]=value;
            end++;
        }

        else if(end==5 && front==0)
        {
            cout<<"queue is full"<<endl;
        }
    
        
    else if(end!=front)
    {
        queue[end]=value;
        end++;
    }
}
int  dequeue(int &front, int &end,int queue[5])
{ 
    int x=0;
    if(front==5)
    { front=0;
    queue[front]=0;
    front++;

            
    }
    else if(front!=end)

      {
        queue[front]=0;
        front++;
    }

}

void display(int queue[5])
{   for(int i=0;i<5;i++)
    cout<<queue[i]<<" ";

}
int main()
{
    int front = 0;
    int end = 0;
    int option;
    int queue[5];
    for (int i = 0; i < 5; i++)
    {
        queue[i] = 0;
    }
    do
    {
        cout << "Press 1 for insert :" << endl;
        cout << "Press 2 for dequeue: " << endl;
        cout << "Press 3 for display: " << endl;
        cin >> option;
        switch (option)
        {

        case 1:
            int val;
            cin >> val;
            insert(val, front, end, queue);
            break;
        case 2:
            dequeue(front, end, queue);
            break;
        case 3:
            display(queue);
            break;
        case 0:
            break;
        }
    } while (option != 0);
    return 0;
}
