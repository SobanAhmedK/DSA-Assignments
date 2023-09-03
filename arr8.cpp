//program to check the number occurs odd number of time

#include <iostream>
using namespace std;

int getOddOccurrence(int nums[], int n)
{
    for (int i = 0; i < n; i++) {
         
        int count = 0;
         
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
                count++;
        }
        if (count % 2 != 0)
            return nums[i];
    }
    return -1;
}
 
int main()
{
    int nums[] = {5,  7,3,3,3,3, 7, 8, 8, 5, 7, 7}; 
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
         cout << "Number occurs odd number of times: " << getOddOccurrence(nums, n);
 
        return 0;
    }