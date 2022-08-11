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
node *deletion(node *head,int i){
    int c=1;
    node *temp=head;
    if(i==0){
       head=temp->next;
       return head;
    }
while(temp->next!=nullptr&&c<i){
     c++;
     temp=temp->next;
}
if(temp->next!=nullptr){
   node *a=temp->next;
   temp->next=a->next;
   delete(a);
}
return head;
}
int main(){
    node *head=takeinput();

      print(head); 
      deletion(head,2);
      print(head);
      

    return 0;
}