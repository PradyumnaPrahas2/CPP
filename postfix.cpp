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
            newNode->next=head;
            head=newNode;
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
    string s="43-12/+",c2;
    char c;
    for(int i=0;i<s.length();i++){
        c=s[i];
        c2=s[i];
        cout<<s[i]<<endl<<endl;
        if( c>=48 && c<=57){
            a=stoi(c2);
            l.add_to_list(a);
            cout<<a<<" added"<<endl;
        }
        else
        {
            x=l.pop();
            y=l.pop();
            cout<<x<<"last"<<endl;
            cout<<y<<"last second popped"<<endl;;
            if(c2=="+"){
                l.add_to_list(x+y);
                cout<<x+y<<"added"<<endl;
            }
            else if(c2=="-"){
                l.add_to_list(x-y);
                cout<<x-y<<"added"<<endl;
            }
             if(c2=="*"){
                l.add_to_list(x*y);
                cout<<x*y<<"added"<<endl;
            }
             if(c2=="/"){
                l.add_to_list(x/y);
                cout<<x/y<<"added"<<endl;
            }
        }
        
    }
    l.printl();
}