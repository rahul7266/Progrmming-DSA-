#include<bits/stdc++.h>
#include "node.c++"
using namespace std;
void print(node *temp){
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
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
node *insert(node *head ,int i,int data){
     node *newnode=new node(data);
    int count=0;
    node *temp=head;
    if(i==0){
        newnode->next=head;
        head=newnode;
        return head;
   }
    while(temp->next!=nullptr&&count<i){
        temp=temp->next;
        count++;
    }
    if(temp->next!=nullptr){
      newnode->next=temp->next;  
    }
     temp->next=newnode; 
     return head;
}
int main(){
    node *head=takeinput();

      print(head); 
     head= insert(head,4,121);
      print(head);

    return 0;
}