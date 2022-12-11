#include<iostream>
using namespace std;
int main()
{
    int n,i,l=INT_MIN;
    cin>>n;
    int a[n];
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>l)
            l=a[i];
    }
    cout<<"largest element is: "<< l<<endl;
    return 0;
}
