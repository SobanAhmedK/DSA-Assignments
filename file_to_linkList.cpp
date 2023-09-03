
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class node
{public:
    string description;
    string price;
    node* next;
    node * previous;
    node()
    {
        
        next=NULL;
        previous=NULL;

    }
node( string d ,string p)
{  description=d;
    price=p;
}

};
class list
{
    node * start;
    node * end;
    public:
    list()
    {
        start=NULL;
        end=NULL;

    }
    
    void insert_data(string d ,string p)
    {   node *new_node = new node(d,p);
        if ( start==NULL )
    {
        start=new_node;
        end=new_node;
    }
    else{
        node * temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
        end=new_node;}
        
    }
    void display()
    {
        node * temp=start;
        while (temp->next!=NULL)
        
        {
            cout<<" Description "<<temp->description<<" "<<"Price "<<temp->price;
            temp=temp->next;
        }
        cout<<endl;
        
    }
};

int main()
{list l1;
string price1;
string description1;
ifstream file("Demo_csv_f.csv");
int count =0;
if(file.is_open())

{
    
    while(!file.eof())
{
    if (count==0)
    {
        string temp;
        getline(file,temp);
        count=1;
    }

    else{
        getline(file,description1,',');
     getline(file,price1,'\n');
     cout<<description1<<endl;
        l1.insert_data(description1, price1);
    }

}}
else{
    cout<<" error"<<endl;
}
l1.display();
    return 0;
}