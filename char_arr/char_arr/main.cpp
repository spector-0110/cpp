#include<iostream>
using namespace std;
int main()
{
    char c[100];
    cin>>c;
    for(int i=0;i<100;i++)
    {
        cout<<c[i];
        if(c[i]=='\0')
            continue;
    }
    
    return 0;
}
