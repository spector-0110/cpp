#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
    }
};
Node* input(){
    //creating dynamic linked list
    Node *head=NULL;
    Node *tail=NULL;
    int data;
    cout<<"press -1 to exit the entry"<<endl;
    cin>>data;
    while(data!=-1){
        Node *n=new Node(data);
        cin>>data;
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
    }
//    tail=NULL;
    return head;
    
}
int length(Node* head){
    if(head==NULL) return 0;
    return 1+length(head->next);
}
 
int main()
{   Node* head=input();
    cout<<"length is="<<length(head)<<endl;
    return 0;
}

