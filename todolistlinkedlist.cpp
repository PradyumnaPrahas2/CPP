#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct node
{
    string data;
    node *left;
    node *right;
};
struct node *newNode(string descrip){
    node *temp=new node;
    temp->data=descrip;
    temp->left=NULL;
    temp->right=NULL;
}
void traversal(node*Node,vector<string>&l){
    if(Node==NULL){
        return;
    }
    l.push_back(Node->data);
    traversal(Node->right,l);
    traversal(Node->left,l);
}
int main()
{
    node *root=newNode("Get up in the morning");
    root->left=newNode("Have Snacks");
    root->right=newNode("Brush teeth");
    root->left->left=newNode("Sleep");
    root->left->right=newNode("Have dinner");
    root->right->left=newNode("Rest after lunch");
    root->right->right=newNode("Have lunch");
    vector<string> l;
    traversal(root,l);
    for(int i=0;i<l.size();i++){
        cout<<l[i]<<endl;
    }
}