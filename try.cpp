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
    string s;
    int limit;
    node *head,*tail;
    public:
    LinkedList()
    {
        head=NULL;
        tail=NULL;
        limit=0;
    }
    void deletel()
    {
        while(limit>0){
            head=head->next;
            limit--;
        }
    }
    void add_to_list(string val)
    {
        node *newNode =new node;
        newNode->data=val;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            tail=newNode;
            limit++;
        }
        else{
            tail->next=newNode;
            tail=newNode;
            limit++;
        }
    }
    string printl(){
        s="";
        node *temp=head;
        while(temp!=NULL){
            s=s+temp->data;
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
        return s;
    }
};
int main()
{
    LinkedList l;
    string x,c;
    l.add_to_list("c");
    l.add_to_list("h");
    l.add_to_list("o");
    l.add_to_list("c");
    l.add_to_list("o");
    x=l.printl();
    l.deletel();
    for(int i=x.length()-1;i>=0;i--){
        c=x[i];
        l.add_to_list(c);
    }
    l.printl();
}