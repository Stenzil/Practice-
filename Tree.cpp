/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct node
{
    int data;
    node * left;
    node * right;
    
};
struct node * newnode(int data)
{
    struct node* node= new struct node;
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}
void print(struct node* root)
{
    if (root!=NULL)
    {
        print(root->left);
        cout<<root->data<<"\n";
        print(root->right);
    }
}
struct node* insert(struct node * node, int key)
{
    if (node==NULL)
    return newnode(key);
    else if (key<node->data)
    node->left=insert(node->left,key);
    else if (key>node->data)
    node->right=insert(node->right,key);
    return node;
}
struct node *search(struct node * root,int a)
{
    if (root!=NULL)
    {
        if(a>root->data)
        {
            cout<<"1";
            search(root->right,a);
        }
        else if(a<root->data)
        {
            cout<<"0";
            search(root->left,a);
        }
        else 
        {
            cout<<"<-- direction  ";
        }
    }
}
int main()
{
    node * root=NULL;
    root=insert(root,50);
    root=insert(root,10);
    root=insert(root,2);
    root=insert(root,56);
    print(root);
    search(root,2);
    return 0 ;
}
