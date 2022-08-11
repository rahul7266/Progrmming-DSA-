#include<bits/stdc++.h>
#include "node.c++"
using namespace std;
int mid(node *head){
    node *temp=head;
    int c=0;
    while(temp!=nullptr){
        c++;
        temp=temp->next;
    }
    node *slow=head;
    node *fast=head->next;
    if(c%2==0){
        while(fast!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
    }
    else{
        while(fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
    }
     return slow->data;
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

    //   print(head); 
     cout<<mid(head)<<endl;
    

    return 0;
}