// Make all the elements of the array even if already then ignore
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 73, 34, 56, 784, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            continue;
        }
        else
        {
            arr[i] = arr[i] + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}