// program to get greater if exist
#include<iostream>
using namespace std;
int next_greater(int arr[],int size,int n)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]>n)
        {
            return arr[i];
            break;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{int arr[]={2,4,5,6,7,8,94,3,4};
int size=sizeof(arr)/sizeof(arr[0]);
int n;
cin>>n;
cout<<next_greater(arr,size,n);
    return 0;
}