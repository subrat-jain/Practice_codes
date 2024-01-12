#include<iostream>
using namespace std;

struct ListNode{
    int val;
    struct ListNode *next;
}*head=NULL;

void push(int data){
    struct ListNode *node=new ListNode();
    node->val=data;
    node->next=head;
    head=node;
}

void insert(int data,int pos){
    struct ListNode *p=head,*node=new ListNode();
    node->val=data;
    if(pos==0){
        node->next=head;
        head=node;
    }
    else{
        for(int i=0;i<pos-1;i++)
            p=p->next;
        node->next=p->next;
        p->next=node;
    }
}

int add(){
    struct ListNode *p=head;
    // p=head;
    int sum=0;
    while(p!=NULL){
        sum+=p->val;
        p=p->next;
    }
    return sum;
}

void delete_node(int pos){
    ListNode *p=head;
    while(pos--){
        p=p->next;
    }
    p->val=p->next->val;
    p->next=p->next->next;
}

void reverse(){
    struct ListNode *prev=NULL,*curr=head,*Next=NULL;
    while(curr!=NULL){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    head=prev;
}

void display(){
    struct ListNode *p;
    p=head;
    while(p!=NULL){
        cout<<p->val<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    cout<<add()<<endl;
    reverse();
    insert(5,3);
    display();
    delete_node(3);
    display();
}