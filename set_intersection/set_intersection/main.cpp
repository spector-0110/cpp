#include <iostream>
using namespace std;
int main()
{
    int m,n,s;
    cout<<"enter no of elements in each sets"<<endl;
    cin>>m>>n;
    if(m>n) s=n;
    else s=m;
    int a[m],b[n],c[s];
    for(int i=0;i<m;i++) {cin>>a[i];}
    for(int i=0;i<n;i++) { cin>>b[i];}
    for(int i=0;i<s;i++)
    {
        if(a[i]==b[i])
        {
            c[i]=a[i];
        }
    }
    for(int i= 0; i<s; i++)
        {
            for(int j=i + 1; j<s; j++)
            {
                
                if(c[i]==c[j])
                {
                    
                    for(int k=j; k<(s- 1);k++)
                    {
                       c[k] =c[k+1];
                    }
                    
                    s--;
                      
                    j--;
                }
            }
        }
    for(int i=0;i<s;i++){cout<<c[i]<<", ";}
    
    return 0;
}
