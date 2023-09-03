task 1:
/*   find Largest Element in an Array  */
#include<iostream>
using namespace std;
int main()
{
    int i,a[50],size;
    cout<<"Enter array size( Max:50 ) :: ";
    cin>>size;
        cout<<"\nEnter array elements :: \n";

        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>a[i];
        }
  cout<<"\nStored Data in Array :: \n\n";
  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }
    int  largest=a[0];
        for (i=0;i<size;i++)
    {
                if(a[i]>largest)
                {
                        largest=a[i];
                }
        }
        cout<<"\n\nLargest Element in an Array :: "<<largest<<endl;
        return 0;
}

task 2:
/*  Display First and Last element of an array  */

#include <iostream>
using namespace std;

int main()
{

    int i,a[50],size;
    cout<<"Enter array size( Max:50 ) :: ";
    cin>>size;
        cout<<"\nEnter array elements :: \n";

        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>a[i];
        }

    cout<<"\nFirst number in the Array :: "<<a[0]<<endl;
    // first element of an array is a[0]
    
    cout<<"\nLast number in the Array :: "<<a[size-1]<<endl;
    // last element of an array is n[SIZE_OF_ARRAY - 1]
    return 0;
}
Task 3:
*  C++ Program to Find Duplicate Elements in an Array  

#include<iostream>
using namespace std;
int main()
{
    int i,j,a[50],size;
    cout<<"Enter array size( Max:50 ) :: ";
    cin>>size;
        cout<<"\nEnter array elements :: \n";
        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>a[i];
        }
  cout<<"\nStored Data in Array :: \n\n";
  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }
  cout<<"\n\nDuplicate Values in Given Array are :: \n\n";
  for(i=0; i<size; i++)
   {
    for(j=i+1;j<size;j++)
    {
    if(a[i]==a[j])
    {
    cout<<" "<<a[i]<<" ";
    }
   }
   }
  cout<<"\n";
  return 0;
 }
 Task 4:
 /*  Find Sum of Elements of an Array  */
#include<iostream>
using namespace std;
int main()
{
    int i,a[50],sum=0,size;
    cout<<"Enter array size( Max:50 ) :: ";
    cin>>size;
        cout<<"\nEnter array elements :: \n";
        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>a[i];
        }
  cout<<"\nStored Data in Array :: \n\n";
  for(i=0;i<size;i++)
  {
  cout<<" "<<a[i]<<" ";
  }
   cout<<"\n\nSum of all Elements of array is :: ";
   for(i=0;i<size;i++)
   {
    sum=sum+a[i];
   }
  cout<<sum<<"\n";
  return 0;
}
Task 5:
#include <iostream>
using namespace std;
int main() {
   int arr[] = {5, 7, 8, 8, 5, 8, 7, 7};
   // Size of the Array
   int sizeArr = sizeof(arr) / sizeof(arr[0]);
   // Original Array Output  
   cout << "Original array: ";
   for (int i = 0; i < sizeArr; i++)
      cout << arr[i] << " ";
   // Value to find   
   int toFind = 7;
   int result;
   for (int i = 0; i < sizeArr; i++)
      if (toFind == arr[i])
         result++;
   // Occurances Output
   cout << "\n 7 occured : " << result << " times";
   return 0;
}
task 6:
#include <iostream>
using namespace std;
int main() {
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int total = sizeof(arr)/sizeof(arr[0]);;
   int i, j, toFind, found = 0;
   cout<<"Original Array: ";
   for (i = 0; i < total; i++) {
      cout<< arr[i] << " ";
   }
   cout << endl << "Enter Element to Delete: ";
   cin >> toFind;
   for (i = 0; i < total; i++) {
      if (arr[i] == toFind) {
         for (j = i; j < (total - 1); j++)
            arr[j] = arr[j + 1];
         found++;
         i--;
         total--;
      }
   }
   if (found == 0) {
      cout << "Element doesn't exist in the Array!";
   } else {
      cout << "After Delection Array: ";
      for (i = 0; i < total; i++) {
         cout<< arr[i] << " ";
      }
   }
   return 0;