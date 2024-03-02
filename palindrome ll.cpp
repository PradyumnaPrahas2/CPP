#include<iostream>
#include<string>
using namespace std;
struct node{
    string data;
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
    void addtol(string val)
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
int main()
{
    string s="hello",c;
    class LinkedList l;
    for(int i=0;i<s.length();i++){
        c=s[i];
        l.addtol(c);
    }
    l.printlist();
}