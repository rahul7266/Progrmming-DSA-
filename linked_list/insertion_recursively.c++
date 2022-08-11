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
node *insert(node *head,int i,int data){
       if(head==nullptr)
       return head;
       if(i==0){
         node *newnode=new node(data);
         newnode->next=head;
         head=newnode;
         return head;
       }
       head->next= insert(head->next,i-1, data); //keep in mind
       return head;
}
int main(){
    node *head=takeinput();

      print(head); 
     head =insert(head,3,121);
      print(head);

    return 0;
}