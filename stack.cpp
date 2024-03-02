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
    node *head,*tail;
    int limit;
       public:
    Stack()
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
            cout<<"Cannot pop an element because stack is empty"<<endl;
        }
        else{
        head=head->next;
        limit--;
        }
    }
    void peek()
    {
        cout<<"peek executed: ";
        if(limit==0){
            cout<<"stack is empty"<<endl;
        }
        else{
        cout<<head->data<<endl;

        }
    }
    void push(int val){
        if(limit>=5)
        {
            cout<<"Stack is full cannot add elements"<<endl;
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
            newNode->next=head;
            head=newNode;
            limit++;
        }
        }
    }

};
int main()
{
    Stack l;
    // l.push(5);
    // l.push(7);
    // l.push(3);
    // l.push(1);
    // l.push(2);
    // l.push(0);
    // l.printl();
    l.pop();
    l.printl();
    l.peek();
    l.pop();
    l.printl();
    l.peek();
}