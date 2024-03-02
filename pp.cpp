#include<iostream>
#include<vector>
#include<list>
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
    return root;
}
void pre_order(node * Node){
    if(Node==NULL){
        return;
    }
    cout<<Node->data<<" ";
    pre_order(Node->left);
    pre_order(Node->right);
}
void in_order(node *Node){
    if(Node==NULL){
        return;
    }
    pre_order(Node->left);
    cout<<Node->data<<" ";
    pre_order(Node->right);
}
void post_order(node* Node){
    if(Node==NULL){
        return;
    }
    post_order(Node->left);
    post_order(Node->right);
    cout<<Node->data<<" ";
}
void level_order(node * Node){
    list<node*> l;
    node *curr;
    l.push_back(Node);
    while(l.size()!=0){
        curr=l.front();
        cout<<curr->data<<" ";
        if(curr->left){
            l.push_back(curr->left);
        }
        if(curr->right){
            l.push_back(curr->right);
        }
        l.pop_front();
    }
}
struct node* insert2(node *&Node,int v){
    list<node*> l;
    node *curr;
    l.push_back(Node);
    while(l.size()!=0){
        curr=l.front();
        // cout<<curr->data<<" ";
        if(curr->left){
            l.push_back(curr->left);
        }
        else{
            curr->left=newNode(v);
            return Node;
        }
        if(curr->right){
            l.push_back(curr->right);
        }
        else{
            curr->right=newNode(v);
            return Node;
        }
        l.pop_front();
    }
}
void insert(node* &Node,int key){
    if(Node==NULL){
        node *fun=newNode(key);
        Node=fun;
    }
    else{
        if(Node->data<key){
            insert(Node->right,key);
        }
        else{
            insert(Node->left,key);
        }
    }
}
void delete_node_2(node *&Node){
    if(Node->left==NULL && Node->right==NULL){
        Node=NULL;
        return;
    }
    if(Node->right){
        Node->data=Node->right->data;
        delete_node_2(Node->right);
    }
    else if(Node->left){
        Node->data=Node->left->data;
        delete_node_2(Node->left);
    }
}
void delete_node(node *&Node,int key){
    if(Node==NULL){
        return;
    }
    if(Node->data==key){
        delete_node_2(Node);
        return;
    }
    delete_node(Node->left,key);
    delete_node(Node->right,key);
}
int main()
{
    node *root=newNode(10);
    root->left=newNode(5);
    root->left->left=newNode(3);
    // root->left->right=newNode(7);
    root->right=newNode(16);
    root->right->left=newNode(12);
    root->right->right=newNode(19);
    insert2(root,13);
    delete_node(root,13);
    cout<<"Post_order_traversal:- ";
    post_order(root);
    cout<<endl<<"Pre_order_traversal:- ";
    pre_order(root);
    cout<<endl<<"In_order_traversal:- ";
    in_order(root);
    cout<<endl<<"Level_order_traversal:- ";
    level_order(root);
    cout<<endl;
}