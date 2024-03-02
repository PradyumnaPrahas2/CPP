#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
};
class Circularlinkedlist
{
    private:
    node *head,*tail;
    public:
    Circularlinkedlist()
    {
        head=NULL;
        tail=NULL;
    }
    void addtol(int val){
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
            tail->next=head;
            head->prev=tail;
        }
    }
    void printl()
    {
        node *temp=head;
       do{
        cout<<temp->data<<" ";
        temp=temp->next;
       }while(temp!=head);
    }
};
int main(){
    Circularlinkedlist l;
    l.addtol(6);
    l.addtol(3);
    l.addtol(2);
    l.addtol(1);
    l.addtol(0);
    l.printl();
}