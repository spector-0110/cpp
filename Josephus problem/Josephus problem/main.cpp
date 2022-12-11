#import<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
    }
};
Node* del(Node* head,int m){
    int i=1;
    while(i<m-1){
        head=head->next;
        i++;
    }

   Node* p=head->next;
    head->next=p->next;
    p->next=NULL;
    delete  p;
    return head->next;
}
//void print(Node* head){
//    Node* p= head->next;
//    cout<<head->data<<"->";
//    while(p!=head)
//    {
//        cout<<p->data<<"->";
//        p=p->next;
//    }
//}
Node* construct_ll(int k){
    Node* head=NULL;
    Node* tail=NULL;
    while(k--){
        Node* n=new Node(k);
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
    }
    tail->next=head;
    return head;
}
int main(){
    int k,m;
    cout<<"enter no of people and steps"<<endl;
    cin>>k>>m;
    Node* head=construct_ll(k);
    while( head->next){
        head=del(head,m);
    }
    cout<<head->data;
    return 0;
}
