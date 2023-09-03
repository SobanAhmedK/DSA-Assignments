#include <iostream>
using namespace std;
struct data_types
{
public:
    int Iitem;
    char Citem;
    float Fitem;
};
int main()
{
    int stack_members = 0;
    int count_operators = -1;
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
    data_types new_array[size];
    char operators[size];
    for (int i = 0; i < size; i++)
    {
        data_types[i].Iitem = 0;
        data_types[i].Fitem = 0;
    }

    cout << "The elements of the array are: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)

    {
        float x = arr[i];
        int y = x;
        if ((arr[i] >= 0 || arr[i] <= 0) && (x - y == 0) && arr[i] != '+' && arr[i] != '*' && arr[i] != '/' && arr[i] != '-')
        {

            new_array[stack_members].Iitem = new_array[stack_members].Iitem * 10;
            new_array[stack_members].Iitem = new_array[stack_members].Iitem + (arr[i] - 48);
            float a = arr[i + 1];
            int b = a;
            if (arr[i + 1] == '+' || arr[i + 1] == '*' || arr[i + 1] == '/' || arr[i + 1] == '-' || arr[i + 1] == '\0' || a - b != 0)
            {
                stack_members++;
            }
        }

        else if ((arr[i] >= 0 || arr[i] <= 0) && (x - y != 0) && arr[i] != '+' && arr[i] != '*' && arr[i] != '/' && arr[i] != '-')
        {

            new_array[stack_members].Fitem = new_array[stack_members].Fitem * 10;
            new_array[stack_members].Fitem = new_array[stack_members].Fitem + (arr[i] - 48);
            float a = arr[i + 1];
            int b = a;
            if (arr[i + 1] == '+' || arr[i + 1] == '*' || arr[i + 1] == '/' || arr[i + 1] == '-' || arr[i + 1] == '\0' || a - b != = 0)
            {
                stack_members++;
            }
        }
        else

        {
            if (count_operators == -1)
            {
                count_operators++;
                operators[count_operators] = arr[i];
            }

            else

            {
                switch (arr[i])

                {
                case '+':
                    if (operators[count_operators] == '+')
                    {
                        new_array[stack_members].Citem = operators[count_operators];

                        stack_members++;
                        operators[count_operators] = arr[i];
                    }
                    else if (operators[count_operators] == '*')
                    {
                        new_array[stack_members].Citem = operators[count_operators];

                        stack_members++;
                        operators[count_operators] = arr[i];
                    }
                    else if (operators[count_operators] == '/')
                    {
                        new_array[stack_members].Citem = operators[count_operators];

                        stack_members++;
                        operators[count_operators] = arr[i];
                    }
                    else if (operators[count_operators] == '-')
                    {
                        count_operators++;
                        operators[count_operators] = arr[i];
                    }
                    break;
                case '-':
                    if (operators[count_operators] == '+')
                    {
                        new_array[stack_members].Citem = operators[count_operators];
                        stack_members++;

                        operators[count_operators] = arr[i];
                    }
                    else if (operators[count_operators] == '*')
                    {

                        new_array[stack_members].Citem = operators[count_operators];

                        stack_members++;
                        operators[count_operators] = arr[i];
                    }
                    else if (operators[count_operators] == '/')
                    {

                        new_array[stack_members].Citem = operators[count_operators];
                        stack_members++;
                        operators[count_operators] = arr[i];
                    }
                    else if (operators[count_operators] == '-')
                    {
                        new_array[stack_members].Citem = operators[count_operators];
                        stack_members++;
                        operators[count_operators] = arr[i];
                    }
                    break;

                case '*':
                    if (operators[count_operators] == '+')
                    {
                        count_operators++;
                        operators[count_operators] = arr[i];
                    }
                    else if (operators[count_operators] == '*')
                    {
                        new_array[stack_members].Citem = operators[count_operators];

                        stack_members++;
                        operators[count_operators] = arr[i];
                    }
                    else if (operators[count_operators] == '/')
                    {
                        new_array[stack_members].Citem = operators[count_operators];

                        stack_members++;
                        operators[count_operators] = arr[i];
                    }
                    else if (operators[count_operators] == '-')
                    {
                        count_operators++;
                        operators[count_operators] = arr[i];
                    }
                    break;
                case '/':
                    if (operators[count_operators] == '+')
                    {
                        count_operators++;
                        operators[count_operators] = arr[i];
                    }
                    else if (operators[count_operators] == '*')
                    {
                        count_operators++;
                        operators[count_operators] = arr[i];
                    }
                    else if (operators[count_operators] == '/')
                    {
                        new_array[stack_members].Citem = operators[count_operators];

                        stack_members++;
                        operators[count_operators] = arr[i];
                    }
                    else if (operators[count_operators] == '-')
                    {
                        count_operators++;
                        operators[count_operators] = arr[i];
                    }
                    break;
                }
            }
        }
    }
    return 0;
}