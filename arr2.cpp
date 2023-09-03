// how many elelments occured more than once in an array
#include <iostream>
using namespace std;
int main()
{int count=0;
    int arr[] = {1,2,3,4,5,6,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    { for(int j=i+1;j<n;j++)
    {if (arr[i]==arr[j])
    {
        count++;
    }

    }

    }
    cout<<count;
    return 0;
}