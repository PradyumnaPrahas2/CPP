#include<iostream>
#include<string>
using namespace std;
struct node
{
    int data;
    node *next;
};
class LinkedList
{
    private:
    node *head,*last;
    int x;
    public:
    LinkedList()
    {
        head=NULL;
        last=NULL;
    }
    void printl(){
        cout<<head->data;
    }
    void add_to_list(int n)
    {
        node *newNode= new node;
        newNode->data=n;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            last=newNode;
        }
        else{
            last->next=newNode;
            last=last->next;
        }
    }
    int pop(){
        x=head->data;
        head=head->next;
        return x;
    }
    
    
};
int main()
{
    LinkedList l;
    int a;
    int x,y;
    string s="71+42/*",c;
    for(int i=0;i<s.length();i++){
        c=s[i];
        try{
            a=stoi(c);
            l.add_to_list(a);
        }
        catch(exception)
        {
            x=l.pop();
            y=l.pop();
            if(c=="+"){
                l.add_to_list(x+y);
            }
            else if(c=="-"){
                l.add_to_list(x-y);
            }
             if(c=="*"){
                l.add_to_list(x*y);
            }
             if(c=="/"){
                l.add_to_list(x/y);
            }
        }
        
    }
    l.printl();
}