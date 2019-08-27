//link list by function
#include<iostream>
using namespace std;

struct node{
unsigned long long int in;
node *link;
};
node *A,*B,*C,*T;
bool q=false;
void number()
{   node *T;

    T=new node();
    if(q==false){
        A=T;
        B=T;
        q=true;
    }
    B->link=T;
    cin>>T->in;
    T->link=NULL;
    B=T;

    //return T;
}

int main(void)
{
    int n;
    cout<<"how many number : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        number();
    }
    node *X;
    X=A;
    cout<<"the numbers are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<X->in<<endl;
        X=X->link;
    }

}
