#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class Stack
{
    private:
    node *head;
    public:
    Stack(){
        head=NULL;
    }
    void push(int val){
        node *newNode=new node;
        newNode->data=val;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    int pop(){
        int x=head->data;
        head=head->next;
        return x;
    }
    void printl(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void pushl(Stack *second){
        
    }
    int isempty(){
        if(head==NULL){
            return 1;
        }
        return 0;
    }
};
int main()
{
    Stack q;
    Stack q2;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.printl();
    while(q.isempty()!=1){
        q2.push(q.pop());
    }
    // q2.push(q.pop());
    // q2.push(q.pop());
    // q2.push(q.pop());
    // q2.push(q.pop());
    q.push(10);
    while(q2.isempty()!=1){
        q.push(q2.pop());
    }
    // q.push(q2.pop());
    // q.push(q2.pop());
    // q.push(q2.pop());
    // q.push(q2.pop());
    cout<<endl;
    q2.printl();
    cout<<endl;
    q.printl();
}