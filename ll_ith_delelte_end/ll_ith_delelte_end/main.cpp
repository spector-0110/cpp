#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
    }
};
Node* input()
{
    cout<<"enter the data of the list and -1 to exit"<<endl;
    int data;
    Node* head=NULL;
    Node* tail=NULL;
    cin>>data;
    while(data!=-1){
        cin>>data;
        Node* n=new Node(data);
        if(head==NULL)
        {
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
//Node* k_node(Node* head){
//    Node* f=head;
//    Node* s=head;
//    int i;cout<<"enter the index to be deleted"<<endl; cin>>i;
//    int j=0;
//    while(j<i-1)
//    {
//        s=s->next;
//        j++;
//    }
//    while(s->next){
//        f=f->next;
//        s=s->next;
//    }
//    return f;
//}
//Node* del(Node *f){
//    Node* t=f->next;
//    f->next=f->next->next;
//    t=NULL;
//    delete t;
//
//    return 0;
//}
void print(Node* head){
    Node* t=head;
    while(t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
}
int main()
{
    Node* head=input();
//    Node* f=k_node(head);
//    del(f);
    print(head);
}


