 //Circular queue without shifting 

#include<iostream>
using namespace std;
    void enqueue(int val, int &front, int &end ,int queue[5])
    {
       
         if(end==5 && front==5)
        {
            front=0;
            end=0;
            queue[end]=val;
            end++;

        }
        else  if (end==5 && front >0)
        {  end=0;
        queue[end]=val;
            end++;
        }
        else if (front== 0 && end==0)
        {

            queue[end] = val;
            end++;
        }
        else if(end==5 && front==0)
        {
            cout<<"queue is full. "<<endl;

        }
        else if (end!=front)
        {
            
            queue[end] = val;
            end++;
        }

    }
    
int dequeue(int &front, int &end, int queue[5])
{
    int x = 0;
    if (front == 0)
    {
        x = queue[front];

        queue[front] = 0;
        front++;
        return x;
    }
    else if (front == 5 && end==5)
    {
        front = 0;
        end = 0;
        return 1;
    }
    else if (front == 0 && end == 0)
    {
       return 0;
    }
    else if (front==5 && end>0)
    {
        front=0;
        queue[front]=0;
        front++;
    }
    else if(front!=end)
    {
        x = queue[front];
        queue[front] = 0;
        front++;
        return x;
    }
}

    void display(int queue[5])
    {
        for (int i=0;i<5;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
    
int main()
{int front=0;     
int end=0;
int option;
int queue[5];
for (int i=0;i<5;i++)
{
    queue[i]=0;
}
do{
    cout<<"Press 1 for insert :"<<endl;
    cout<<"Press 2 fro dequeue: "<<endl;
    cout<<"Press 3 for display: "<<endl;
    cin>>option;
    switch (option)
    {
    
    case 1:
    int val;
    cin>>val;
    enqueue(val,front,end,queue);
    break;
    case 2:
    dequeue(front,end,queue);
    break;
    case 3:
   display(queue);
   break;
   case 0:
   break;

    }
    cout<<"value of end is : "<<end<<endl;
    cout<<"Vale of front is : "<<front<<endl;



}
while (option!=0);


    return 0;
}
