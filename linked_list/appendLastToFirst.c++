#include<bits/stdc++.h>
#include "node.c++"
using namespace std;
void print(node *temp){
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
node *takeinput(){
     int data;
   cin>>data;
   node *head=nullptr;
   node *tail=nullptr;
   while(data!=-1){
        node *newnode=new node(data);
        if(head==nullptr){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;  
            tail=tail->next; 
        }
       cin>>data;
   }
   return head;
}
node* append(node* head,int i){
    node*p,*q=head;
    while(q->next!=nullptr){
        i=i-1;
        if(i==0)
          p=q;
          q=q->next;
    }
    node*temp=p->next;
    p->next=nullptr;
    q->next=head;
    head=temp;
    return head;
}

int main(){
    node *head=takeinput();
    head=append(head,4);
     print(head);
   return 0;
}