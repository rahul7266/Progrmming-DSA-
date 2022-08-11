#include<bits/stdc++.h>
#include "node.c++"
using namespace std;
void print(node *temp){
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){
    //statically
  node n1(1);
  node *head=&n1;
  node n2(2);
 // head->next=&n2; 
 n1.next=&n2;
 node n3(3),n4(4),n5(5);
 n2.next=&n3;
 n3.next=&n4;
 n4.next=&n5;
 //dynamically
//  node *n1=new node(1);
//  node *n2=new node(2);
//  node *head=n1;
//  n1->next=n2;
   
//cout<<n1.data<<"->"<<n2.data;
print(head);
    return 0;
}