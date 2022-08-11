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
node *reverse(node *head){
     node *prev=nullptr;
     node *cur=head;
     node *nextptr;
     while(cur!=nullptr){
                nextptr=cur->next;
                cur->next=prev;
                prev=cur;
                cur=nextptr;
            }
        return prev;
}
int main(){
    node *head=takeinput();
 
      print(reverse(head));
      //print(head);

    return 0;
}