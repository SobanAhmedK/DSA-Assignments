//Program to find the second smallest element
#include<iostream>
using namespace std;
int main()
{int arr[]={2,34,4,67,687,986,5,4};
int size=sizeof(arr)/sizeof(arr[0]);
int min=arr[0];
for(int i=0;i<size;i++)
{
    if (arr[i]<min)
    {
        min =arr[i];    }
}
for(int i=0;i<size;i++)
{
    if (arr[i]==min) 
    {
        arr[i]=0101010;    }
}
int min2=arr[0];
for(int i=0;i<size;i++)
{
    if (arr[i]<min2)
    {
        min2 =arr[i];    }
}


cout<<"The minimum is :"<< min<<endl;
cout<<"The second minimum is :"<< min2<<endl;

    return 0;
}