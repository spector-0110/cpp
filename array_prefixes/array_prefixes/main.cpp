#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100];
    cin.getline(a,100);
    for(int i=0;i<strlen(a)+1;i++)
    {
        char c[100];
        cout<<strncpy(c,a,i)<<endl;
    }
}
