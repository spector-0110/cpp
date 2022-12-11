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
//    stack(int cap)
//    {
//        a=new int(cap);
//        n=0;
//        this->capacity=cap;
//    }
    void push(int data)
    {
        if(n==capacity) {
            int *n1=new int(2*capacity);
            for(int i=0;i<capacity;i++)
            {
                n1[i]=a[i];
            }
            capacity*=2;
            delete []a;
            a=n1;
        }
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
    stack s;
    for(int i=0;i<12;i++)
    {
        s.push(i+1);
    }
    for(int i=0;i<12;i++)
    {
       cout<< s.top()<<", ";
        s.pop();
    }
    
    return 0;
}

