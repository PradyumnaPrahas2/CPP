#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class Queue
{
    private:
    node *head,*tail;
    int limit;
       public:
    Queue()
    {
        head=NULL;
        tail=NULL;
        limit=0;
    }
    void printl(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void pop(){
        cout<<"pop executed: ";
        if(limit==0){
            cout<<"Cannot pop an element because queue is empty"<<endl;
        }
        else{
        node *temp=head,*temp2;
        while(temp->next!=NULL){
            temp2=temp;
            temp=temp->next;
        }
        temp2->next=NULL;
        limit--;
        }
    }
    void peek()
    {
        cout<<"peek executed: ";
        if(limit==0){
            cout<<"queue is empty"<<endl;
        }
        else{
        node *temp=head,*temp2;
        while(temp!=NULL){
            temp2=temp;
            temp=temp->next;
        }
        cout<<temp2->data<<endl;
        }
    }
    void push(int val){
        if(limit>=5)
        {
            cout<<"Queue is full cannot add elements"<<endl;
        }
        else
        {
        node *newNode=new node;
        newNode->data=val;
        newNode->next=NULL;
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            limit++;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
            limit++;
        }
        }
    }

};
int main()
{
    Queue l;
    l.push(5);
    l.push(7);
    l.push(3);
    l.push(1);
    l.push(2);
    l.push(0);
    l.push(10);
    l.printl();
    l.pop();
    l.printl();
    l.peek();
    l.pop();
    l.printl();
    l.peek();
}
// circular linked list 
// reverse a linked list