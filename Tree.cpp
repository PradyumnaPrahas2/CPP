#include<iostream>
#include<vector>
using namespace std;
struct node{
    int data;
    node *val;
    node *left;
    node *right;
    node *next;
};
class Stack{
    private:
    node *head,*last;
    public:
    Stack(){
        head=NULL;
        last=NULL;
    }
    void push(node *root){
        node *temp=new node;
        temp->val=root;
        if(head==NULL){
            head=temp;
            last=temp;
        }
        else{
            last->next=temp;
            last=temp;
        }
    }
    void first(){
    cout<<head->val->val<<" ";
    }
    void pop(){
        head=head->next;
    }
    int check(){
        if(head==NULL){
            return 1;
        }
        else return 0;
    }
};
struct node *newNode(int val)
{
    node *head= new node;
    head->data=val;
    head->left=NULL;
    head->right=NULL;
    return head;
}
void printtree(struct node *root)
{
    if(root==NULL){
        return ;
    }
    printtree(root->left);
    printtree(root->right);
    cout<<root->data<<" ";
}
void pop_front(vector<node*> &v)
{
    if (v.size() > 0) {
        v.erase(v.begin());
    }
}
void insert_function(node* &Node,int value){
    if(Node==NULL){
        node * newNode=new node;
        newNode->data=value;
        newNode->left=NULL;
        newNode->right=NULL;
        Node=newNode;
        cout<<value;
        cout<<" Node inserted successfully"<<endl;
        return ;
    }
    else{
    if(value>Node->data){
        cout<<value<<" "<<Node->data<<" ";
         insert_function(Node->right,value);
    }
    else{
        cout<<value<<" "<<Node->data<<" ";
        insert_function(Node->left,value);
    }}
}
void max_heap(node * &Node,node * prev){
    if(Node==NULL){
        return;
    }
    max_heap(Node->left,Node);
    max_heap(Node->right,Node);
    if(prev!=NULL && Node->data>prev->data){
        int temp=Node->data;
        Node->data=prev->data;
        prev->data=temp;
    }
}
void min_heap(node * & Node, node * prev){
    if(Node==NULL){
        return;
    }
    min_heap(Node->left,Node);
    min_heap(Node->right,Node);
    if(prev!=NULL && Node->data<prev->data){
        int temp=Node->data;
        Node->data=prev->data;
        prev->data=temp;
    }
}
void printthis(node *root){
    // Level-Order Traversal
    node *curr;
    vector<node*> l;
    l.push_back(root);
    while(l.size()!=0){
        curr=l[0];
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
        pop_front(l);
    }
    cout<<endl;
}
int main()
{
    // Stack l;
    struct node *root= newNode(10);
    root->left=newNode(4);
    root->right=newNode(12);
    root->left->left=newNode(2);
    root->left->right=newNode(6);
    root->right->right=newNode(15);
    root->right->right->right=newNode(24);
    root->right->left=newNode(11);
    int val_to_insert=100;
    insert_function(root,val_to_insert);
    // printtree(root);
    // l.push(root);
    // while(l.check()!=1){
    //     if(root->left!=NULL){
    //         l.push(root->left);
    //     }
    //     else if(root->right!=NULL){
    //         l.push(root->right);
    //     }
    //     l.first();
    //     l.pop();
    // }
    cout<<"Actual Binary Tree:-"<<endl;
    printthis(root);
    node *prev=NULL;
    cout<<"Max_heap:-"<<endl;
    max_heap(root,prev);
    printthis(root);
    cout<<"Min_heap:-"<<endl;
    min_heap(root,prev);
    printthis(root);
}
//           38
//      11          29
// 3      10        61     42
//                          24
// level order:- 10 4 12 2 6 11 15 24 
// to be inserted 19
