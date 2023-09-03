#include<iostream>
using namespace std;
void extend(int *&First_queue, int &size)
{
    int* old_Q= new int[5];
    old_Q = First_queue;
    First_queue = new int[size];
    for (int i = 0; i < 5; i++)
    {
        First_queue[i]=old_Q[i];
    }
    delete [] old_Q;
}
int main()

{
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int * First_queue= new int[size];
cout<<"Enter elements of first queue: "<<endl;

  for(int i=0;i<size;i++)
  {
    cin>>First_queue[i];
  }
  cout<<"Elements of the queue are: "<<endl;

    for(int i=0;i<5;i++)
  {
   cout<<First_queue[i]<<" ";
  }
  cout<<endl;
  cout<<"Enter the size for the Extended array: "<<endl;
  int size2;
  cin>>size2;
  size=size2;
  extend(First_queue , size);
  int j;
  for( j=0;j<size;j++)
  {
    cin>>First_queue[j];
    
  }
  cout<<j<<" num of elements entered! "<<endl;
  for( int i=0;i<size;i++)
  {
cout<<First_queue[i]<<" ";   
  }
    return 0;
} 