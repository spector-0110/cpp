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
Node* insert(Node* head)
{   Node *node=head;
    int i,m;
    cout<<"enter index and the number "<<endl;
    cin>>i>>m;
    Node *n=new Node(m);
    if(i==0){
        n->next=head;
        head=n;
        return head;
    }
    else{
        int j=0;
        while(j<i-1){
            head=head->next;
            j++;
        }
        n->next=head->next;
        head->next=n;
        return node;
    }
        
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
{   Node* head=input();
    Node *head1=insert(head);
    print(head1);
    cout<<endl;
    return 0;
}

