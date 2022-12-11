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
        if(tail==NULL){
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
Node* delete_node(Node* head)
{
    int i;
    cout<<"enter postion of node to delete"<<endl;
    cin>>i;
    if(i<0)
    {
        return head;
    }
    else if (i==0){
        Node* new_head=head->next;
        head->next= NULL;
        delete  head;
        return new_head;
        
        
    }
    else{
        Node* t=head;
        int j=0;
        while(j<i-1)
        {
            head=head->next;
            j++;
        }
        
        if(head->next)
        {
            Node* temp=head->next;
            head->next=head->next->next;
            temp=NULL;
            delete temp;
            return t;
            
        }
       
    }
    return head;
}

Node* print(Node *head)
{
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    return 0;
}
int main()
{   Node* head=input();;
    head=delete_node(head);
    print(head);
    return 0;
}


