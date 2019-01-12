/******************************************************************************
2017-12-12
*******************************************************************************/
#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class linkdlist
{
    public:
    int data;
    char str[100];
    linkdlist * next;
    linkdlist()
    {
        data=0;
        strcpy(str,"hi there");
        next=NULL;
    }
    void insert(int a);
    
};
linkdlist *top=NULL;
void insert(int a)
{
    linkdlist *hr=new(linkdlist);
   if(top==NULL)
   {
       top=hr;
       hr->data=a;
   }
   else
   {
       hr->next=top;
       hr->data=a;
       top=hr;
       
   }
}
void print()
{
    linkdlist *ht;
    ht=top;
    while(ht!=NULL)
    {
        cout<<ht->data<<"\t";
        ht=ht->next;
    }
}
void del()
{
    top=top->next;
    cout<<"Popped (y)";
}
int main()
{
    int a,no;
    linkdlist node;
    a=0;
    while(a!=4)
    {
        cout<<"1).Push";
        cout<<"2). POp";
        cout<<"3).Traverse";
        cout<<"4).Exit";
        cin>>a;
        switch (a)
        {
            case 1: cout<<"enter the no ";
                    cin>>no;
                    insert(no);
                    break;
            case 2:del();
                    break;
            case 3: print();
                    break;
            default: cout<<"BYE";
                        break;
        }
    }    

    return 0;
}
