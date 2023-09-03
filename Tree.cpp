// Array to sorted array then baba structure using linked list
//baba structure stored in an array
//printed  the baba structure in pre order
#include<iostream>
using namespace std;
struct b_bax
{
     
    int data;
    b_bax *left;
    b_bax *right;
    b_bax() 
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
    b_bax(int data1)
    {
        data = data1;
    }
};

void bubbleSort(int arr[])
{
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < (16 - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
b_bax * convert_Array(int arr[],int start , int end)
{
    if (start > end)
    {
        return NULL;
    }
    int mid=(start+end)/2;
     b_bax* parent=new b_bax(arr[mid]);
     parent->left=convert_Array(arr,start,mid-1);
     parent->right=convert_Array(arr,mid + 1,end);
     return parent;
}
void show(b_bax * parent)
{
    if(parent!=NULL)
    {   cout<<parent->data<<" ";
        show(parent->left);
        show(parent->right);

    }
}
 
void baba_convert(b_bax *parent, int A[])
{
    static int pos = 0;
    if(parent == NULL) return;

   baba_convert(parent->left, A);
    A[pos++] = parent->data;
    baba_convert(parent->right, A);

}

int main()
{int arr[16];
int new_arr[16];
cout<<"Enter the array :"<<endl;
for(int i=0;i<16;i++)
{
    cin>>arr[i];
}
cout<<"Array in unsorted form : "<<endl;
for(int i=0;i<16;i++)
{
   cout<<arr[i]<<" ";
}cout<<endl;
bubbleSort(arr);
cout<<"Array in sorted form : "<<endl;
for(int i=0;i<16;i++)
{
   cout<<arr[i]<<" ";
}cout<<endl;
 b_bax * parent=convert_Array(arr, 0 , 15);
show(parent);
cout<<endl;
baba_convert(parent,new_arr);
	cout << "New Array : ";
	for(int i = 0; i <16; i++){
        cout << new_arr[i] << " ";

}


    return 0;
}