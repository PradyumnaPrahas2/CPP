#include<iostream>
#include<string>
using namespace std;
struct node{
    char data;
    node *next;
};
class sentence
{
    private:
    node *head;
    public:

    sentence()
    {
        head=NULL;
    }
    void printl(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->next;
        }
        cout<<" ";
    }
    void push(char s){
        node *newNode=new node;
        newNode->data=s;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    ~sentence(){
        
    };
    void pop(){
        head=head->next;
    }
};
int main()
{
    string s="Keshav Memorial Institute of Technology";
    char c;
    sentence l;
    int j=0,k=0;
    for(int i=0;i<s.length();i++){
        c=s[i];
        if(c==' ' or i==s.length()-1){
            l.printl();
            while(k>j){
                // cout<<"1";
                l.pop();
                j++;
            }
        }
        else{
        l.push(c);
        k++;
        }
    }
}