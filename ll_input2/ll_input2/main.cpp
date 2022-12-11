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
            n->next=head;
            head=n;
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
    print(head);
    return 0;
}

