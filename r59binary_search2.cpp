//binary search tree
#include<iostream>
using namespace std;
struct node{
double data;
node *right;
node *left;
};
node* creating(double data)
{
    node *r=new node();
    r->data=data;
    r->right=NULL;
    r->left=NULL;
    return r;
}
node* inserting(node* root,double data)
{
    if(root==NULL)
    {
        root=creating(data);
    }
    else if(root->data>=data){
        root->left=inserting(root->left,data);
    }
    else if(root->data<data){
        root->right=inserting(root->right,data);
    }
    return root;
}
void showing(node *root)
{
    if(root!=NULL)
    {
        showing(root->right);
        cout<<root->data<<endl;
        showing(root->left);
    }
}
int main(void)
{
    node *rootptr=NULL;
    int n;
    double data;
    cout<<"how many you want to insert : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {   cin>>data;
        rootptr=inserting(rootptr,data);
    }
    cout<<"showing decreasing order : "<<endl;
showing(rootptr);
}
