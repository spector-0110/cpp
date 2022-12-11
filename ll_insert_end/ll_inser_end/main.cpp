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
Node* head=NULL;
Node* tail=NULL;
Node* input(){
    //creating dynamic linked list
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
    return 0;
}

Node* insert(Node* tail)
{
    int m;
    cout<<"enter the number to insert in the end "<<endl;
    cin>>m;
    Node *n=new Node(m);
    tail->next=n;
    n=NULL;
    return 0;
    //    Node* temp=head;
    //    cout<<"enter number to insert at end"<<endl;
    //    int m;
    //    cin>>m;
    //    Node * n=new Node(m);
    //    while(temp!=NULL)
    //    {
    //        temp=temp->next;
    //    }
    //    temp=n;
    //    n->next=NULL;
    //    return head;
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
{   input();
    insert(tail);
    print(head);
    return 0;
}


