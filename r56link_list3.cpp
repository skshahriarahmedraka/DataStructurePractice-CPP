//doubly link list by function
#include<iostream>
using namespace std;
struct node{
node* n1;
double d;
node* n2;
};
node* A,*B,*C;
bool x=false;
void func(void)
{
    node *T;
    T=new node();
    cin>>T->d;
    T->n1=nullptr;
    T->n2=nullptr;
    if(x==false){
        A=T;
        B=T;
        x=true;
    }
    if(T!=B){
    T->n1=B;

    B->n2=T;
    B=T;
    }
}
int main(void)
{
    node *temp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       func();
    }
    temp=A;
    cout<<"data in order: "<<endl;
    for(int i=0;temp!=nullptr;i++ )
    {
        cout<<temp->d<<endl;
        temp=temp->n2;
    }

    temp=B;
    cout<<"data in reverse order: "<<endl;
    for(int i=0;temp!=nullptr;i++ )
    {
        cout<<temp->d<<endl;
        temp=temp->n1;
    }

}


