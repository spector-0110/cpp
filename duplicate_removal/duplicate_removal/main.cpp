#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[10000],i,j,c=n;
    cout<<"enter sorted array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=a[j+1];
                c--;
            }
        }
    }
    for(i=0;i<c;i++)
    {
        cout<<a[i]<<",";
    }
    return 0;
    
}

