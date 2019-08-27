//delete an element  link list
#include<iostream>
using namespace std;
struct node{
    double b;
    node *n2;
};
node *A,*B;
bool x=true;

void func(void)
{   node *T;
T=new node();
cin >>T->b;
T->n2=nullptr;
if(x==true)
{
    A=T;
    B=T;
    x=false;
}
if(T!=B)
{
    B->n2=T;
    B=T;
}

}
node* dele(node* T)
{   node *T1;
    T1=T;
    T=T->n2;
    T1->n2=T->n2;
    delete T;
    return T1;


}
int main(void)
{
int n,p1;
cin>>n;
cout<<"enter data : "<<endl;
for(int i=0;i<n;i++)
{
    func();
}
node *Y;
Y=A;
cout<<"the data: "<<endl;
while(Y!=nullptr)
{   cout<<Y->b<<endl;
    Y=Y->n2;
}
cout<<"delete index at position : "<<endl;
cin>>p1;
if(p1<=n){
        Y=A;
for(int i=0;i<n;i++)
{
    if(i==p1-1)
    {   node* Y1;
    Y1=Y->n2;

       //Y= dele(Y);
       Y->n2=Y1->n2;
    }
    Y=Y->n2;
}
}
else {
    cout<<"sorry"<<endl;
}
Y=A;
cout<<"the data after delete: "<<endl;
while(Y!=nullptr)
{   cout<<Y->b<<endl;
    Y=Y->n2;
}
}
