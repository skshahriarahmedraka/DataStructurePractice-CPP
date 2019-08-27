//binary search tree level order print
#include<iostream>
#include<queue>
using namespace std;
struct node{
double data;
node *left;
node *right;
};
node *inserting(node* root,double data)
{
    if(root==nullptr)
    {
        root=new node();
        root->data=data;
        root->left=root->right=nullptr;
    }
    else if(root->data>=data)
    {
        root->left=inserting(root->left,data);
    }
    else if(root->data<data)
    {
        root->right=inserting(root->right,data);
    }
    return root;
}
void show(node *root)
{
    if(root!=nullptr)
    {
        show(root->right);
        cout<<root->data<<endl;
        show(root->left);
    }
}
void level_order(node* root)
{
    if(root==nullptr) return;
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* current=q.front();
        cout<<current->data<<endl;
        if(current->left!=nullptr)
        {
            q.push(current->left);
        }
        if(current->right!=nullptr)
        {
            q.push(current->right);
        }
       // cout<<current->data<<endl;
        q.pop();
    }
}
int main(void)
{   node *rootptr=nullptr;
    int n;
   cout<<"how many element : "<<endl;
   cin>>n;
   double e;
   cout<<"element :"<<endl;
   for(int i=0;i<n;i++)
   {    cin>>e;
        rootptr=inserting(rootptr,e);
   }
   //cout<<"asending order: "<<endl;
   //show(rootptr);
   cout<<"level order : "<<endl;
   level_order(rootptr);
}
