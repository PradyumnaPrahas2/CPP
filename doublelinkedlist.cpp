#include<iostream>
#include<string>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
};
class DoubleLinkedList
{
    private:
    node *head,*tail;
    int limit=0;
    public:
    DoubleLinkedList()
    {
        head=NULL;
        tail=NULL;
    }
    void addtol(int val)
    {
        node *newNode=new node;
        newNode->data=val;
        newNode->next=NULL;
        newNode->prev=NULL;
        if(head==NULL){
            head=newNode;
            tail=newNode;
            limit++;
        }
        else{
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
            limit++;
        }
    }
    void reverselist()
    {
        node *temp=head;
        node *temp2=tail;
        cout<<limit<<endl;
        
        // node *x=head;
        // node *y=tail;
        // int x,y;
        // while(temp )
        // {
        //     // x=temp->data;
        //     // y=temp2->data;
        //     // temp->data=x;
        //     // temp2->data=y;
        //     // cout<<temp->data<<"swapped with"<<temp2->data<<endl;
        //     // temp = temp->next;
        //     // temp2 = temp2->prev;
        //     temp->data=1;
        //     temp=temp->next;
        //     break;
        // }
    }
    void replace(int val1,int val2){
        node *temp=head;
        while(temp){
            if(temp->data==val1){
                temp->data=val2;
            }
            temp=temp->next;
        }
    }
    void printl(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->next;
        }
        cout<<endl;
    }
    // void reverse()
    // {
    //     node *temp=tail;
    //     while(temp!=NULL){
    //         cout<<temp->data;
    //         temp=temp->prev;
    //     }
    //     cout<<endl;
    // }

};
int main()
{
    DoubleLinkedList l;
    // string s="amazon",c;
    // for(int i=0;i<s.length();i++){
    //     c=s[i];
    //     l.addtol(c);

    // }
    l.addtol(6);
    l.addtol(4);
    l.addtol(3);
    l.addtol(7);
    l.addtol(2);
    l.printl();
    l.replace(3,8);
    l.printl();
    l.reverselist();
    l.printl();
}