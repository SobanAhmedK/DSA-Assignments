#include <iostream>
using namespace std;

void BubbleSort( int arr[] , int size)

{ 
  for(int i=0 ; i<size ; i++)
{
    for(int j=0 ; j<size-i ; j++)
    {
        int temp = arr[j];

        if(arr[j] > arr[j+1])
        {
            arr[j] = arr[j+1];
            arr[j+1] = temp;

        }
        

    }
}

}


int main()
{
int arr[5]= {3,12,5,23,6};

cout<<"Array before Sorting: "<<endl;

for(int i=0 ; i<5 ; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
BubbleSort(arr , 5);

cout<<"Array after Sorting: "<<endl;
for(int i=0 ; i<5 ; i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}
