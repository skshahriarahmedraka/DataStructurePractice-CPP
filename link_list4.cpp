//print link list in reverse
#include<iostream>
using namespace std;
struct node{
double d;
node *n2;
};
node *A,*B;
bool b=true;
void func(void)
{
    node *T;
    T=new node();
    cin>>T->d;
    T->n2=nullptr;
    if(b==true)
    {
        A=T;B=T;b=false;
    }
    if(T!=B){
        B->n2=T;
        B=T;
    }
}
int print_reverse(node *q)
{
    if(q==nullptr)
    {
        return 0;
    }
    print_reverse(q->n2);
    cout<<q->d<<endl;
}
int main(void)
{
    int n;
    cin>>n;
    cout<<"give elements : "<<endl;
    for(int i=0;i<n;i++){
        func();
    }
    cout<<"element in reverse : "<<endl;
    print_reverse(A);
}
