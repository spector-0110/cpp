#include<iostream>
#include<cstring>
using namespace std;
 int main()
{
     string a;
     cin>>a;
     for(int i=strlen(a);i<=0;i++)
     {
         
         cout<<a.substr(strlen(a),i)<<endl;
        
     }
     
     return 0;
 }

