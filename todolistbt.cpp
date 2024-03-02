#include<iostream>
#include<vector>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
};
struct node* newNode( int val){
    node* root=new node;
    root->data=val;
    root->left=NULL;
    root->right=NULL;
}
void insert(node* &Node,int val){
    if(Node==NULL){
        node *temp=new node;
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
        }
    }
}
void pop_front(vector<node*> &v)
{
    if (v.size() > 0) {
        v.erase(v.begin());
    }
}
int main()
{
    string arr[7]={"Sleep","Have Snacks","Have dinner","get up in the morning","rest after lunch","brush teeth","have lunch"};
    int ar[6]={1,0,2,5,4,6};
    node *root=newNode(3);
    for(int i=0;i<sizeof(ar)/sizeof(int);i++){
        insert(root,ar[i]);
    }
    node *curr;
    vector<node*> l;
    l.push_back(root);
    while(l.size()!=0){
        curr=l[0];
        cout<<arr[curr->data]<<" ";
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
        pop_front(l);
    }
    cout<<endl;
}