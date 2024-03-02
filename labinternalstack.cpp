#include<iostream>
#include<string>
using namespace std;
struct node{
    string data;
    node *next;
};
class stack1
{
    private:
    node *head,*tail;
    int limit=0;
    public:
    stack1()
    {
        head=NULL;
        tail=NULL;
    }
    void printl(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    // void reverse()
    // {
        
    // }
    void push(string s){
        if(limit>20){
            cout<<"Stack is full cannot add elements"<<endl;
        }
        else{
        node *temp=new node;
        temp->data=s;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            tail=temp;
            limit++;
        }
        else{
            temp->next=head;
            head=temp;
            limit++;
        }}
    }
    void pop()
    {
        if(limit<=0){
            cout<<"Stack is empty"<<endl;
        }
        else{
        head=head->next;
        limit--;
        }
    }
    void peek(){
        if(limit<=0){
            cout<<"Stack is empty"<<endl;
        }
        else{
        node *temp=head;
        cout<<temp->data;
        }
    }

};
int main()
{
    string s="moon and sun";
    stack1 l;
    string c;
    for(int i=0;i<s.length();i++){
        c=s[i];
        l.push(c);
    }
    // l.printl();
    for(int i=s.length();i>0;i--){
        l.peek();
        l.pop();
    }
    // l.reverse();
}