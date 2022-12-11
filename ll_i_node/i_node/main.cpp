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
     tail=NULL;
    return head;
    
}
int i_node(Node *head){
    int m,i=0;
    cout<<"enter index of node"<<endl;
    cin>>m;
    if(m>0){
        while(i<m){
            head=head->next;
            i++;
        }
        
    }
    if(head){
        cout<<head->data<<" "<<endl;
    }
    return 0;
    
}
 
int main()
{   Node* head=input();
      i_node(head);
     return 0;
}

