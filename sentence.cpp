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
    void printl()
    {
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->next;
        }
        cout<<endl;
    }
    void pop(){
        head=head->next;
    }
    void push(char s)
    {
        node *temp2=new node;
        temp2->data=s;
        temp2->next=NULL;
        if(head==NULL){
            head=temp2;
        }
        else{
            temp2->next=head;
            head=temp2;
        }
    }
};
int main()
{
    string s="monwns hello kkss ";
    char c;
    stack1 l;
    for(int i=0;i<s.length();i++){
        c=s[i];
        if(c==' '){
            l.printl();
            l.~stack1();
            stack1 l;
        }
        else{
        l.push(c);
        }
    }
}