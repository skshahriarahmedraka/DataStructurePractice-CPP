#include<iostream>
using namespace std;
stack node{
node *n1;
double d;
}
node *A,*B;
bool b=true;
void func(void)
{ node *T;
    T=new node();
    T->n1=nullptr;
    if(b==true){
        A=T;
        B=T;
        b=true;
    }
    if(T!=A)
    {
        T->n1=A;
        A=T;
    }

}

int main(void)
{   node *temp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        func();
    }


}
