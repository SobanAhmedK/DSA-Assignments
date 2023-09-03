
//Program for three operands and 2 operators( operators can be any of two + , - , * ,/ )
#include <iostream>
using namespace std;
double summation(string arr, int size)
{
    double TotalCalculation,FirstCalculation=0;
    double op1 = 0, op2 = 0, op3 = 0;
    int counter = 0;
    char opr1, opr2;
    for (int i = 0; i < size; i++)
    {
        counter++;
        if (arr[i] == '+' || arr[i] == '-' || arr[i] == '/' || arr[i] == '*')

            break;
        else
            op1 = op1 * 10;
        op1 = op1 + (arr[i] - 48);
    }
    //cout << "count before 2 is " << counter << endl;
    switch (arr[counter - 1])
    {
    case '+':
        opr1 = '+';
        break;
    case '-':
        opr1 = '-';
        break;
    case '/':
        opr1 = '/';
        break;
    case '*':
        op1 = '*';
        break;
    }
    for (int i = counter; i < size; i++)
    {
        counter++;
        if (arr[i] == '+' || arr[i] == '-' || arr[i] == '/' || arr[i] == '*')
            break;
        else
            op2 = op2 * 10;
        op2 = op2 + (arr[i] - 48);
    }
    switch (opr1)
    {
    case '+':
        FirstCalculation = op1 + op2;
        break;
    case '-':
        FirstCalculation=op1-op2;
        break;
    case '/':
        FirstCalculation=op1/op2;
        break;
    case '*':
       FirstCalculation=op1*op2;
        break;
    }
    //cout << "count before 3 is " << counter << endl;
    switch (arr[counter - 1])
    {
    case '+':
        opr2 = '+';
        break;
    case '-':
        opr2 = '-';
        break;
    case '/':
        opr2 = '/';
        break;
    case '*':
        opr2 = '*';
        break;
    }
    for (int i = counter; i < size; i++)
    {
        if (arr[i] == '+' || arr[i] == '-' || arr[i] == '/' || arr[i] == '*')
            break;
        else
            op3 = op3 * 10;
        op3 = op3 + (arr[i] - 48);
    }
switch (opr2)
    {
    case '+':
        TotalCalculation= FirstCalculation + op3;
        break; 
       TotalCalculation=FirstCalculation * op3;
        break;
    }
    //cout << op1 << " " << op2 << " " << op3;
    return TotalCalculation;
}
int main()
{
    int size = 0;
    string arr;
    cin >> arr;
    cout << " The char array is :"<< arr << endl;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        size++;
    }
   cout<<"The Answer is : "<<summation(arr, size);

    return 0;
}