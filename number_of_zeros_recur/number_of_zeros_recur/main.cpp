#include<iostream>
using namespace std;
int cnt(int n){
    
    if(n==0) return 0;
    int s= cnt(n/10);
    if(n%10==0) return s + 1;
    else return s;
}
int main(){
    
    int n;
    cin>>n;
    cout<<cnt(n)<<endl;
    return 0;
}
