// program to swap the array and print in reverse order
#include<iostream>
using namespace std;
 int main()
{
     int n,i;
     cout<<"enter no elements"<<endl;
     cin>>n;
     int a[n];
     cout<<"enter array elements"<<endl;
     for(i=0;i<n;i++)
     {
         cin>>a[i];
         
     }
     int s=0,e=n-1;
     while(s<=e)
     {
         swap(a[e],a[s]);
         e--,s++;
     }
     for(i=0;i<n;i++)
     {
         cout<<a[i]<<",";
     }
     return 0;
 }


