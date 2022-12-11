#include<iostream>
using namespace std;
void second_large(int a[],int n)
{
    int l=0,s=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[l])
        {
            l=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[l]>a[s])
        {
            if(a[i]>=a[s])
            {
                s=i;
            }
        }
    }
    cout<<"second largest element is="<<a[s]<<endl;
}

int main()
{
    int n;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    second_large(a,n);
    return 0;
}
 
