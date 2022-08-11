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
node* del(node* head,int i){
   if(head==nullptr)
     return head;
   if(i==0){
       node *a=head;
       head=head->next;
       delete(a);
       return head;
   }  
  head->next=del(head->next,i-1);
  return head;
}
int main(){
    node *head=takeinput();
    head=del(head,3);
     print(head);
   return 0;
}