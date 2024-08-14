#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{

    for(int i=1 ; i<size ; i++)
    {
      int j=i-1;
      int current = arr[i];
      for( j= i-1 ; j>=0 && current < arr[j] ; j--)
      {
        {
            arr[j+1] = arr[j];
        }
      }
      
        arr[j+1] = current;
    }
}

int main()

{
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int arr[size];
    cout<<"Enter the elements of Array: "<<endl;
     for (int i = 0; i < size; i++)
    {
        cin>>arr[i];    }
    cout << "Array before Sorting: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    InsertionSort(arr, size);

    cout << "Array after Sorting: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
