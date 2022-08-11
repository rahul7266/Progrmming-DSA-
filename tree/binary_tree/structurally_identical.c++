#include<bits/stdc++.h>
#include "tree.c++"
using namespace std;
bool sidentical(btnode<int>*root1,btnode<int>*root2){
    if(root1==nullptr&&root2==nullptr)
    return true;
    else if((root1&&!root2)||(!root1&&root2))
    return false;
    if(root1->data!=root2->data)
    return false;
    sidentical(root1->left,root2->left);
    sidentical(root1->right,root2->right);
    return true;
}
btnode<int>* takeinput(){
    int data;
    cout<<"enter data";
    cin>>data;
    if(data==-1)
    return nullptr;
    btnode<int>*root=new btnode<int>(data);
    btnode<int>*l=takeinput();
    btnode<int>*r=takeinput();
    root->left=l;
    root->right=r;
    return root;
}
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main(){
    btnode<int>*root1=takeinput();
    btnode<int>*root2=takeinput();
   // sum(root);
    cout<<sidentical(root1,root2);
    return 0;
}