#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val){
         data=val;
        left=right=nullptr;
    }
};

int main(){
    struct node*root=new node(1);
}