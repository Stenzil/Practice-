/******************************************************************************
Author - xor
2017-08-08
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
int len()
{
    linkdlist *p= new(linkdlist);
    p=top;
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
    
}
void insert(int a,int pos)
{
    linkdlist *hr=new(linkdlist);
    linkdlist *q=new(linkdlist);
   if(top==NULL||pos==1)
   {
       hr->next=top;
       top=hr;
       hr->data=a;
   }
   else
   {
       q=top;
       for(int i=1;i<pos-1;i++)
       {
           cout<<q->data;
           q=q->next;
       }
       hr->next=q->next;
       q->next=hr;
       hr->data=a;
       
   }
   cout<<"\tlength of LL:  "<<len()<<"\n";
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
    int a,no,pos;
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
                    cout<<"enter the pos";
                    cin>>pos;
                    insert(no,pos);
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
