// program to update every array element by multiplication of next  values of a given array of integers
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 7, 2, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= n; i++)
    {
        if (i < n)
        {
            arr[i] = arr[i] * arr[i + 1];
        }
    }
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}