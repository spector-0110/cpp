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
{
    int n;
    cout<<"enter number to insert at beginning"<<endl;
    cin>>n;
    Node *m= new Node(n);
    m->next=head;
    head=m;
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
{   Node* head=input();
    print(insert(head));
    return 0;
}


