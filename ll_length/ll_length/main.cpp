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
 
//Node* print(Node *head)
//{
//    while(head!=NULL){
//        cout<<head->data<<"->";
//        head=head->next;
//    }
//    return 0;
//}
int length(Node *head){
    Node *temp=head;
    int l=0;
    while(temp!=0){
        l++;
        temp=temp->next;
    }
    return l;
}
int main()
{   Node* head=input();;
   // print(head);
    int l=length(head);
    cout<<"length is:"<<l<<endl;
    return 0;
}

