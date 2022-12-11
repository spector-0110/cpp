#include<iostream>
using namespace std;
int main()
{
    int a[10],pos,ele,n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter position of element"<<endl;
    cin>>pos;
    cout<<"enter element "<<endl;
    cin>>ele;
    n++;
    for(int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
