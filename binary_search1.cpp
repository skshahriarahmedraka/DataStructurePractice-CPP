#include<iostream>
using namespace std;
struct bstnode{
double data;
bstnode* left;
bstnode* right;
};
bstnode *rootptr;//*rootptr2;
bstnode* creating(double data)
{   bstnode *node;
    node=new bstnode();
    node->data=data;
    node->left=nullptr;
    node->right=nullptr;
    return node;
}
bstnode* inserting(bstnode *rootptr2,double data)
{
    if(rootptr2==nullptr){
        rootptr2=creating(data);
    }
    else if(rootptr2->data>=data){
        inserting(rootptr2->left,data);
    }
    else if(rootptr2->data<data)
    {
        inserting(rootptr2->right,data);
    }
    return rootptr2;
}
void show(bstnode *rootptr)
{
    if(rootptr->right==nullptr)
    {
        cout<<rootptr->data<<endl;

    }

    else if(rootptr->right!=nullptr)
    {
        show(rootptr->right);
    }
    cout<<rootptr->data<<endl;
    if(rootptr->left!=nullptr){
        show(rootptr->left);
    }
    else return;

}
void show1(bstnode *root)
{
    if(root!=nullptr)
    {
        show1(root->left);
        cout<<root->data<<endl;
        show1(root->right);
    }
}
int main(void)
{ rootptr=nullptr;
   int n;
   cout<<"number of element: "<<endl;
   cin>>n;
    double x;
    cout<<"element : "<<endl;
    for(int i=0;i<n;i++){
    cin>>x;
    rootptr=inserting(rootptr,x);
    }
  show1(rootptr);
}
