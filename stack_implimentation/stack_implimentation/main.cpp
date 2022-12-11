#include<iostream>
using namespace std;
class stack{
    int *arr;
    int ni;
    int capacity;
public:
    stack (int cap)
    {
        arr=new int(cap);
        ni=0;
        this->capacity=cap;
    }
    int size(){
        return ni;
    }
    bool isEmpty(){
        return ni==0;
    }
    void push(int ele)
    {
        if(ni==capacity)
        {
            cout<<"stack is full"<<endl;
            return;
        }
        arr[ni]=ele;
        ni++;
    }
    int top()
    {
        if(isEmpty())
        {
            cout<<"stack is empty"<<endl;
            return 0;
        }
        return arr[ni-1];
        
    }
    void pop()
    {
        if(isEmpty())
            cout<<"stack is empty"<<endl;
        ni--;
        
    }
};

int main()
{
    stack s(10);
    s.push(3);
    s.top();
//    for(int i=0;i<10;i++)
//    {
//        s.push(i);
//    }
//    for(int i=0;i<10;i++)
//    {
//        s.top();
//        s.pop();
//    }
    
    return 0;
}
