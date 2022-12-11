#include<iostream>
using namespace std;

int prime(int n){
    int p=0;
    for(int j=1;j<=n;j++)
    {
        int c=0;
        for(int i=1;i<=j;i++)
        {
            if(j%i==0) c++;
        }
        if(c==2) p++;
    }
    return p;
}
int main(){
    int n;
    cin>>n;
    cout<<prime(n)<<endl;
    return 0;
}

