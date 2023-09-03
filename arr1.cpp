//C++ program to find all elements in array of integers which have at-least two greater elements.
#include<iostream>
using namespace std;
 
void greater_elements(int nums[], int n)
{
    cout << "Elements which have atleast two greater elements: ";
    for (int i=0; i<n; i++)
    {
        int count  = 0;
        for (int j=0; j<n; j++)
            if (nums[j] > nums[i])
                count++;
 
        if (count >= 2)
            cout << nums[i] << " ";
    }
}
 

int main()
{
    int nums[] = {20,89,73,9,83,34,83,830,63};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<endl;
 greater_elements(nums, n);
    return 0;
}