#include<iostream>
using namespace std;
int main()
{
    int n,i,max=INT_MIN,min=INT_MAX;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }
    cout<<"max is:"<<max<<endl;
    cout<<"min is:"<<min<<endl;
    return 0;
}
