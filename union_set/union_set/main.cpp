#include<iostream>
using namespace std;
 int main()
 {
    int a[100],b[100],c[200],al,bl,i,j,l;
    cout<<"enter no of element in a and b";

    cin>>al>>bl;
    for(i=0;i<al;i++)
    {
       cin>>a[i];
    }
    for(i=0;i<bl;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<al-1;i++)
    {
        for(j=i+1;i<al;j++)
        {
            if(a[i]==a[j])
            a[j]=0;
        }
    }
    for(i=0;i<bl-1;i++)
    {
        for(j=i+1;i<bl;j++)
        {
            if(b[i]==b[j])
            b[j]=0;
        }
    }
    for(i=0;i<(al+bl);i++)
    {
        if(i<al)
        c[i]=a[i];
        else
        {
            if(a[i-al]==b[i])
            {
                continue;
            }
            else
            c[i]=b[i];
        }
    }
    l=(sizeof(c))/4;
    for(i=0;i<l;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
 }

