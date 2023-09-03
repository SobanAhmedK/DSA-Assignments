// program to calculate a total char array considering DMAS
#include <iostream>
using namespace std;
int main()
{
    string arr;
    int size = 0;
    cout << "Enter the elements of the array: " << endl;
    cin >> arr;
    cout << " The char array is :" << arr << endl;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        size++;
    }
    cout << size << endl;
    float operands[size];
    char operators[size];
    for (int i = 0; i < size; i++)
    {
        operands[i] = 0;
    }
    int ctr1 = 0;
    int ctr2 = 0;

    cout << "The elements of the array are: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != '+' && arr[i] != '*' && arr[i] != '/' && arr[i] != '-')
        {

            operands[ctr1] = operands[ctr1] * 10;
            operands[ctr1] = operands[ctr1] + (arr[i] - 48);
            if (arr[i + 1] == '+' || arr[i + 1] == '*' || arr[i + 1] == '/' || arr[i + 1] == '-'|| arr[i + 1] == '\0')
            {
                ctr1++;
            }
        }
        else

        {
            operators[ctr2] = arr[i];
            ctr2++;
        }
    }
    cout<<" OpeRANDS COUNT IS : "<<ctr1<<endl;
    cout << "The operators are: " << endl;
    for (int i = 0; i < ctr2; i++)
    {
        cout << operators[i] << " ";
    }
    cout << endl;

    cout << "The operands are: " << endl;
    for (int i = 0; i < ctr1; i++)
    {
        cout << operands[i] << " ";
    }
    

    int ptr = 0;
    for (int i = 0; i < ctr1; i++)
    {
        if (operators[i] == '/')
        {
            operands[i] = operands[i] / operands[i + 1];
            ptr = i;
            for (int j = ptr; j < ctr1; j++)
            {
                operands[j + 1] = operands[j + 2];
            }
            for (int k = ptr; k < ctr2; k++)
            {
                operators[k] = operators[k + 1];
            }
            ctr1--;
            ctr2--;
            i--;
        }
    }

    for (int i = 0; i < ctr1; i++)
    {
        if (operators[i] == '*')
        {
            operands[i] = operands[i] * operands[i + 1];
            ptr = i;
            for (int j = ptr; j < ctr1; j++)
            {
                operands[j + 1] = operands[j + 2];
            }
            for (int k = ptr; k < ctr2; k++)
            {
                operators[k] = operators[k + 1];
            }
            ctr1--;
            ctr2--;
            i--;
        }
    }

    for (int i = 0; i < ctr1; i++)
    {
        if (operators[i] == '+')
        {
            operands[i] = operands[i] + operands[i + 1];
            ptr = i;
            for (int j = ptr; j < ctr1; j++)
            {
                operands[j + 1] = operands[j + 2];
            }
            for (int k = ptr; k < ctr2; k++)
            {
                operators[k] = operators[k + 1];
            }
            ctr1--;
            ctr2--;
            i--;
        }
    }
    for (int i = 0; i < ctr1; i++)
    {
        if (operators[i] == '-')
        {
            operands[i] = operands[i] - operands[i + 1];
            ptr = i;
            for (int j = ptr; j < ctr1; j++)
            {
                operands[j + 1] = operands[j + 2];
            }
            for (int k = ptr; k < ctr2; k++)
            {
                operators[k] = operators[k + 1];
            }
            ctr1--;
            ctr2--;
            i--;
        }
    }
    cout << endl;
    cout << "Final result of the array is : " << endl;
    for (int i = 0; i < ctr1; i++)
    {
        cout << operands[i] << " ";
    }
    return 0;
}