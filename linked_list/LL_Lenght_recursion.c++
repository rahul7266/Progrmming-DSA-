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
int length(node *head){
    if(head==nullptr)
    return 0;
    return 1+length(head->next);
}
int main(){
    node *head=takeinput();
    cout<<length(head);

   return 0;
}