#include<iostream>
using namespace std;
class stack{
    int *a;
    int n;
    int capacity;
public:
    stack(){
        n=0;
        a=new int(5);
        capacity=5;
    }
    stack(int cap)
    {
        a=new int(cap);
        n=0;
        this->capacity=cap;
    }
    void push(int data)
    {
        if(n==capacity) cout<<"stack is full"<<endl;
        else
        {
            a[n]=data;
            n++;
            
        }
    }
    void pop()
    {
        if(isEmpty()) cout<<"empty stack"<<endl;
        else n--;
    }
    bool isEmpty(){
        return n==0;
    }
    int top()
    {
        if(isEmpty())
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return a[n-1];
    }
    int size()
    {
        return n;
    }
};
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    stack a(n);
    for(int i=0;i<n;i++)
    {
        a.push(i+1);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a.top()<<"["<<a.size()<<"]"<<", ";
        a.pop();
    }
    cout<<endl;
    cout<<a.isEmpty()<<endl;
    return 0;
}
