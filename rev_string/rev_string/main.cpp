#include<iostream>
using namespace std;
int length(char a[])
{
     int l=0,i;
     for(i=0;a[i]!='\0';i++)
     {
         l++;
     }
     return l;
 }
 
 void rev(char a[])
{
     int s=0,e=length(a)-1;
     while(s<e)
     {
         swap(a[s],a[e]);
         s++;
         e--;
     }
    
 }
int main()
{
    char a[100];
    cin.getline(a,100);
    rev(a);
    cout<<"your reversed string is:"<<a<<endl;
    return 0;
}
