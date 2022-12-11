#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter number of elements in both sets"<<endl;
    cin>>n>>m;
    int a[n],b[m];
    cout<<"enter elements in set A"<<endl;
    for(int i =0;i<n;i++) cin>>a[i];
    cout<<"enter elements in set B"<<endl;
    for(int i =0;i<m;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"("<<a[i]<<","<<b[j]<<")"<<" ";
        }
    }
    return 0;
    
}
