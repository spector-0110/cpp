#include<iostream>
using namespace std;
class Node{
public:
    int c;
    int e;
    Node* next;
    Node(int c,int e){
        this->c=c;
        this->e=e;
    }
};
Node* input1(){
    Node* head=NULL;
    Node* tail=NULL;
    int k;
    cout<<"enter no of elements"<<endl;
    cin>>k;
    cout<<"enter coffiecent and exponents of numbers"<<endl;
    while(k--){
        int c,e;
        cin>>c>>e;
        Node* n=new Node(c,e);
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
    }
    tail->next=NULL;
    return head;
}
Node* input2(){
    Node* head=NULL;
    Node* tail=NULL;
    int k;
    cout<<"enter no of elements"<<endl;
    cin>>k;
    cout<<"enter coffiecent and exponents of numbers"<<endl;
    while(k>0){
        k--;
        int c,e;
        cin>>c>>e;
        Node* n=new Node(c,e);
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
    }
    tail->next=NULL;
    return head;
}
Node* add(Node* l1,Node* l2){
    Node* head=NULL;
    Node* tail=NULL;
    while(l1 && l2){
        int x=l1?l1->e:0;
        int y=l2?l2->e:0;
        if(x==y)
        {
            Node* n=new Node(l1->c+l2->c,l1->e);
            if(head==NULL){
                head=n;
                tail=n;
            }
            else{
                tail->next=n;
                tail=n;
            }
            l1=l1?l1->next:nullptr;
            l2=l2?l2->next:nullptr;
        }
        else if(x>y){
            Node* n=new Node(l1->c,l1->e);
            if(head==NULL){
                head=n;
                tail=n;
            }
            else{
                tail->next=n;
                tail=n;
            }
            l1=l1?l1->next:nullptr;
            
        }
        else{
            Node* n=new Node(l2->c,l2->e);
            if(head==NULL){
                head=n;
                tail=n;
            }
            else{
                tail->next=n;
                tail=n;
            }
            l2=l2?l2->next:nullptr;
            
        }
    }
    
    return head;
}
void print(Node* head){
    while(head){
        cout<<head->c<<"x^"<<head->e<<"+ ";
        head=head->next;
    }
}

int main(){
    Node* l1=input1();
    Node* l2=input2();
   Node* head= add(l1, l2);
    print(head);
    return 0;
    
}

