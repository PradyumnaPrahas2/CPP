#include<string>
#include<iostream>
using namespace std;
struct node
{
    string data;
    node *next;
};
class LinkedList
{
    private:
    node *head,*last;
    int limit;
    string x;
    public:
    LinkedList()
    {
        head=NULL;
        last=NULL;
    }
    void printl(){
        cout<<head->data;
    }
    string check(string s){
        if((s=="+" && head->data=="*" )|| (s=="+" && head->data=="/")){
            return "pop";
        }
        else if((s=="+" && head->data=="-" )|| (s=="-" && head->data=="+")){
            return "pop";
        }
        else if((s=="-" && head->data=="*" )|| (s=="-" && head->data=="/")){
            return "pop";
        }
        else if((s=="*" && head->data=="/" )|| (s=="/" && head->data=="*")){
            return "pop";
        }
        else if((s=="/" && head->data=="+")|| (s=="/" && head->data=="-")){
            return "pop";
        }
        else{ return "add";}

    }
    void add_to_list(string n)
    {
        node *newNode= new node;
        newNode->data=n;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            last=newNode;
            limit++;
        }
        else{
            newNode->next=head;
            head=newNode;
            limit++;
        }
    }
    string pop(){
        x=head->data;
        head=head->next;
        limit--;
        return x;
    }
    string empty(){
        if (head==NULL){
            return "1";
        }
        else{
            return "0";
        }
    }
    
    
};
int main()
{
    LinkedList l;
    int a;
    int x,y;
    int limit=0;
    string f;
    string s="3*7/8-2+3",c="",t;
    for(int i=0;i<s.length();i++){
        t=s[i];
        try{
            a=stoi(t);
            c=c+to_string(a);
        }
        catch(exception){
            if(limit==0){
                cout<<t<<" added"<<endl;
                l.add_to_list(t);
                limit++;
            }
            else{
                cout<<l.check(t)<<t<<endl;
                if(l.check(t)=="add"){
                    l.add_to_list(t);
                    cout<<t<<" added"<<endl;
                    limit++;
                }
                else{
                    while(limit>0){
                        f=l.pop();
                        cout<<f<<" popped"<<endl;
                        c=c+f;
                        limit--;
                    }
                    l.add_to_list(t);
                    cout<<t<<" added"<<endl;
                    limit++;
                    // cout<<c<<endl;
                }
            }
        }
    }
    l.printl();
    c=c+l.pop();
    cout<<endl;
    // l.printl();
    cout<<endl<<c<<endl;
}