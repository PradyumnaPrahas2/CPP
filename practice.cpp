#include<iostream>
#include<list>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
struct node{
    node *left,*right;
    int data;
};
struct node* newNode(int val){
    node *root=new node;
    root->data=val;
    root->left=NULL;
    root->right=NULL;
}
void traversal(node*Node,vector<int> &l)
{
    if(Node==NULL){
        return;
    }
    traversal(Node->left,l);
    l.push_back(Node->data);
    traversal(Node->right,l);
}
void insert(node*&Node,int val){
    if(Node==NULL){
        node*temp=new node;
        temp->data=val;
        temp->left=NULL;
        temp->right=NULL;
        Node=temp;
    }
    else{
    if(val>Node->data){
        insert(Node->right,val);
    }
    else{
        insert(Node->left,val);
    }}
}
void smax(node* root){
    vector<int> m;
    traversal(root,m);
    set<int> k(m.begin(),m.end());
    vector<int> h(k.begin(),k.end());
    int d=*max_element(h.begin(),h.end()-1);
    cout<<"IInd Max element in the Binary Tree is "<<d<<endl;
}
void level_order(node* root){
    list<node*> l;
    l.push_back(root);
    node *curr;
    cout<<"LEVEL_ORDER"<<endl;
    while(l.size()!=0){
        curr=l.front();
        cout<<curr->data<<" ";
        if(curr->left!=NULL && curr->right!=NULL){
            l.push_back(curr->left);
            l.push_back(curr->right);
        }
        else{
        if(curr->left!=NULL){
            l.push_back(curr->left);
        }
        if(curr->right!=NULL){
            l.push_back(curr->right);
        }}
        l.pop_front();
    }
}
bool search(node* root,int x){
    vector<int> l;
    traversal(root,l);
    for(int val:l){
        if(val==x){
            return true;
        }
    }
    return false;
}
int main()
{
    node *root=newNode(10);
    root->left=newNode(8);
    root->left->left=newNode(7);
    root->left->right=newNode(9);
    root->right=newNode(13);
    root->right->left=newNode(11);
    root->right->right=newNode(15);
    root->right->right->left=newNode(14);
    smax(root);
    level_order(root);
    insert(root,16);
    smax(root);
    level_order(root);
    cout<<endl<<search(root,19);
}