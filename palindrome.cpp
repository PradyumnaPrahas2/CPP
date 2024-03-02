#include<iostream>
#include<string>
using namespace std;
struct node{
    string data;
    node *next;
    node *prev;
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
        newNode->prev=NULL;
        newNode->next=NULL;
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
    void printlist1(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void testpalindrome()
    {
        node *newNode=new node;
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" "<<tail->data;
            if(temp->data!=tail->data){
                cout<<"Not palindrome since "<<temp->data<<" and "<<tail->data<<" differ"<<endl;
                break;
            }
            temp=temp->next;
            tail=tail->prev;
        }
        // newNode=temp;
        // while(temp!=NULL){
        //     temp=temp->prev;
        //     newNode->next=temp;
        // }
        // newNode->next=NULL;
        // while(newNode!=NULL){
        //     cout<<newNode->data<<" ";
        // }
    }
};
int main()
{
    string s="hooohoo",c;
    class LinkedList l;
    for(int i=0;i<s.length();i++){
        c=s[i];
        l.addtol(c);
    }
    // l.printlist1();
    l.testpalindrome();
}