#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
};
class DoubleLinkedList
{
    private:
    node *head,*tail;
    public:
    DoubleLinkedList()
    {
        head=NULL;
        tail=NULL;
    }
    void addtol(int val)
    {
        node *newNode=new node;
        newNode->data=val;
        newNode->next=NULL;
        newNode->prev=NULL;
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }
    }
    void printl(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->next;
        }
        cout<<endl;
    }
    void rotate()
    {
        node *temp=head,*temp2;
        while(temp!=NULL){
            temp2=temp;
            temp=temp->next;
        }
        temp->next=head;
        head=temp->next;

    }
    void reverse()
    {
        node *temp=tail;
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->prev;
        }
        cout<<endl;
    }

};
int main()
{
    DoubleLinkedList l;
    l.addtol(5);
    l.addtol(3);
    l.addtol(1);
    l.addtol(2);
    l.printl();
    // l.reverse();
    l.rotate();
    l.printl();
}