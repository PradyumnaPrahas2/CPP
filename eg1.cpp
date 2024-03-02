// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     int x=stoi("5");
//     cout<<x;
// }
#include<iostream>
#include<string>
using namespace std;
struct node{
    int data;
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
    void add_to_list(int val)
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
        string x;
        node *temp=head;
        while(temp!=NULL){
            x=to_string(temp->data);
            s=s+x;
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
    string x,c,h,j;
    int a;
    l.add_to_list(10);
    l.add_to_list(30);
    l.add_to_list(70);
    l.add_to_list(90);
    l.add_to_list(60);
    x=l.printl();
    l.deletel();
    cout<<x<<endl;
    for(int i=x.length()-1;i>=0;i--){
        c="";
        h=x[i-1];
        j=x[i];
        c=h+j;
        a=stoi(c);
        l.add_to_list(a);
        // cout<<x[i-1]<<x[i]<<" ";
        i--;
    }
    l.printl();
}