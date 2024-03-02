#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
class Queue
{
    private:
    node *head,*tail;
    public:
    Queue(){
        head=NULL;
        tail=NULL;
    }
    void push(int val){
        node *newNode=new node;
        newNode->data=val;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    int pop(){
        int x =head->data;
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
    int isempty(){
        if(head==NULL ){
            return 1;
        }
        return 0;
    }
};
int main()
{
    Queue q;
    Queue q2;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.printl();
    cout<<endl;
    while(q.isempty()!=1){
        q2.push(q.pop());
    }
    // q2.push(q.pop());
    // q2.push(q.pop());
    // q2.push(q.pop());
    // q2.push(q.pop());
    q2.printl();
    cout<<endl;
    q.push(10);
    while(q2.isempty()!=1){
        q.push(q2.pop());
    }
    // q.push(q2.pop());
    // q.push(q2.pop());
    // q.push(q2.pop());
    // q.push(q2.pop());
    cout<<endl;
    cout<<endl;
    q.printl();
}