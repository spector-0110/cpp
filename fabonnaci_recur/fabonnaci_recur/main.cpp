#include<iostream>
using namespace std;
int fab(int n){
    if(n==1) return 1;
    if(n==0) return 0;
    return fab(n-1)+fab(n-2);
}
int pow(int x,int n){
    if(n==0) return 1;
    return x*pow(x, n-1);
}
int main(){
    int n,x;cout<<"enter a number n and x"<<endl;
    cin>>n>>x;
    cout<<fab(n)<<endl;
    
    cout<<pow(x,n)<<endl;
    return 0;
}
