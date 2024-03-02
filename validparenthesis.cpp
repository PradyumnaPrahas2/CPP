#include<iostream>
#include<list>
#include<string>
using namespace std;
struct node{
    char data;
    node *next;
};
class Stack{
    private:
    node *head;
    public:
    Stack()
    {
        head=NULL;
    }
    void push(char b){
        node* newNode=new node;
        newNode->data=b;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void pop(){
        head=head->next;
    }
    char laste(){
        return head->data;
    }
    int isEmpty(){
        if (head==NULL){
            return 0;
        }
        else return 1;
    }
};
int main()
{
    string s="[(])";
    Stack S;
    for(int i=0;i<s.length();i++){
        char c=s[i];
        if(c=='[' || c=='(' || c=='{'){
            S.push(c);

        }
        if(c==')'){
            if(S.laste()=='('){
                S.pop();
            }
        }
        if(c==']'){
            if(S.laste()=='['){
                S.pop();
            }
        }
        if(c=='}'){
            if(S.laste()=='{'){
                S.pop();
            }
        }
    }
    if(S.isEmpty()==0){
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }
}