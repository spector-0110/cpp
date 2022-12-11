#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers to swap "<<endl;
    cin>>a>>b;
    // here we can also use swap(a,b) bulit in function to swap the numbers
    a=a^b; // value of a is a^b
    b=a^b; // here value of b will change to a i.e by b=a^b^b
    a=a^b; // here value of will be eqaul to b by a=a^b^a
    cout<<"swapped value of a:"<<a<<endl;
    cout<<"swapped value of b:"<<b<<endl;
    return 0;
    
}
