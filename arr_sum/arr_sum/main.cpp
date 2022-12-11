#include<iostream>
using namespace std;
 int main()
{
     int n,sum=0;
     cin>>n;
     int a[n],i;
     cout<<"enter array elementa   "<<endl;
     for(i=0;i<n;i++)
     {
         cin>>a[i];
         sum+=a[i];
     }
     cout<<sum;
     return 0;
 }
