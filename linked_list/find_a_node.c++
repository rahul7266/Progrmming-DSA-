#include<bits/stdc++.h>
#include "node.c++"
using namespace std;
int find(node*head,int x,int i){
    if(head==nullptr)
    return -1;
    if(head->data==x)
    return i;
      find(head->next,x,i++);
}


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

int main(){
    node *head=takeinput();

      print(head); 
     cout<<find(head,3,0)<<endl;
     // print(head);

    return 0;
}