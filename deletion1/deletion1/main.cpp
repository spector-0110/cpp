#include<iostream>
using namespace std;
int main()
{
    int a[10],i,pos,n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter elements of array"<<endl;
    for(i=0;i<n;i++) cin>>a[i];
    cout<<"enter positon of element "<<endl;
    cin>>pos;
    for(i=pos-1;i<=n;i++)  a[i]=a[i+1];
    n--;
    for(i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
