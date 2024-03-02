#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
class LinkedList
{
    private:
    node *head,*tail;
    public:
    LinkedList()
    {
        head=NULL;
        tail=NULL;
    }
    void addtol(int val)
    {
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
    void printlist()
    {
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
};
node *addboth(node *l1,node *l2){
        // node *temp2=l1;
        // node *temp3=l2;
        while(l1!=NULL){
            l1->data=l1->data+l2->data;
            cout<<l1->data<<" ";
            l1=l1->next;
            l2=l2->next;
        }
}
int main()
{
    // node *l1=NULL,*l2=NULL;
    LinkedList l1;
    LinkedList l2;
    l1.addtol(7);
    l1.addtol(2);
    l1.addtol(1);
    l2.addtol(7);
    l2.addtol(2);
    l2.addtol(1);
    l1.printlist();
    l2.printlist();
    // cout<<addboth(l1,l2);
}